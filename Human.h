#pragma once
#include "Functions.h"
#include <array>
#include <vector>
#include <string>
#include <iostream>

class Human
{
private:
    static  std::array<std::string, 10> names_list;

    unsigned short Age;
    std::string Name;

protected:
    Human() : Age(getRandomNumber(20, 40)), Name(names_list[getRandomNumber(0, names_list.size()-1)]) {}

public:
    virtual void getGreetings(Human& other_human) const = 0;
    virtual void getDescription() const = 0;
    const std::string& getName() const
    {
        return Name;
    }
    unsigned short getAge() const
    {
        return Age;
    }
};

std::array < std::string, 10> Human::names_list{
    "Alexandr",
    "Anrei",
    "Anastacia",
    "Irina",
    "Natali",
    "Pavel",
    "Roman",
    "Svetlana",
    "Sergei",
    "Tatiana"
};