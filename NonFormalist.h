#pragma once
#include "Human.h"
class Nonformalist : public Human
{
private:



public:

    virtual void getGreetings(Human& other_human) const override
    {
        std::cout << "Hi, " << other_human.getName() << "!\n";
    }
    virtual void getDescription() const override
    {
        std::cout << "My name is " << getName() << ", I am " << getAge() << " years old and i am nonformalist\n";
    }

};
