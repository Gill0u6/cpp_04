#pragma once

#include "Animal.hpp"

class Cat: public Animal
{
    private:
        std::string _type;
    
    public:
        Cat();
        Cat(const Cat &cp);

        ~Cat();

        void makeSound(void);
};