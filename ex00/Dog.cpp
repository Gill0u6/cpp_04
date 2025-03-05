#include "Dog.hpp"

Dog::Dog(): Animal()
{
    this->_type = "Dog";
    std::cout << "Dog Default Constructor Called" << std::endl;
}

Dog::Dog(const Dog &cp): Animal(cp)
{
    std::cout << "Dog Copy Constructor Called" << std::endl;
}