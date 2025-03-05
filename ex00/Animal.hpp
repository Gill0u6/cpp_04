#pragma once

#include <string>
#include <iostream>

class Animal
{
    protected:
        std::string _type;

    public:
        Animal();
        Animal(const Animal &cp);

        virtual ~Animal();

        Animal &operator=(const Animal &cp);

        virtual void makeSound(void);

        std::string getType(void);
};