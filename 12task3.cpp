#include <iostream>
#include "Formalist.h"
#include "NonFormalist.h"
#include "Realisth.h"


unsigned short corrInput()
{
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    std::cout << "\n";
    while (true) {
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "Enter correct value!\n";
           
        }
        break;
    }
    std::cin.ignore(1000, '\n');
    return static_cast<unsigned short>(number);
}


void communication(const std::vector<Human*>& people) 
{
    for (const auto& person : people)
    {
        person->getDescription();
    }
    std::cout << "\n";
    Human* Person1;
    Human* Person2;
    for (int i{ 0 }; i < people.size(); i++)
    {
        Person1 = people[i];
        for (int j{ i + 1 }; j < people.size(); j++) 
        {
            Person2 = people[j];

            
            std::cout << Person1->getName()<< ": ";
            Person1->getGreetings(*Person2);
            
            std::cout << Person2->getName() << ": ";
            Person2->getGreetings(*Person1);
        }
    }
}


int main()
{
    srand(static_cast<unsigned short>(time(0)));
    unsigned short count;
    std::cout << "Enter a count of people\n";
    count = corrInput();
    std::vector<Human*>people(count);
    for (auto& person : people)
    {
        switch (rand()%3)
        {
        case 0:
            person = new Formalist();
            break;
        case 1:
            person = new Nonformalist();
            break;
        case 2:
            person = new Realist();
            break;
        default:
            break;
        }
    }
    communication(people);

    for (auto& person : people)
    {
        delete person;
    }
}
