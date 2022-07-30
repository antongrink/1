#pragma once
#include "Human.h"


class Formalist : public Human
{
private:




public:

    virtual void getGreetings(Human& other_human) const override
    {
        std::cout << "Hello, " << other_human.getName() << "!\n";
    }
    virtual void getDescription() const override
    {
        std::cout << "My name is " << getName() << ", I am " << getAge() << " years old and i am formalist\n";
    }


};
