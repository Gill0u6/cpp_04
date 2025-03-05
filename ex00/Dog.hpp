#pragma once

#include "Animal.hpp"

class Dog: public Animal
{
    private:
        std::string _type;
    
    public:
        Dog();
        Dog(const Dog &cp);

        ~Dog();

        void makeSound(void);
};