#pragma once
#include "Human.h"
class Realist : public Human
{
private:



public:

    virtual void getGreetings(Human& other_human) const override
    {
        if (other_human.getAge() - getAge() <= 5)
            std::cout << "Hi, " << other_human.getName() << "!\n";

        else
            std::cout << "Hello, " << other_human.getName() << "!\n";

    }
    virtual void getDescription() const override
    {
        std::cout << "My name is " << getName() << ", I am " << getAge() << " years old and i am realist\n";
    }

};
