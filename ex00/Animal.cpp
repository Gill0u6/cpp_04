#include "Animal.hpp"

Animal::Animal(): _type("default")
{
    std::cout << "Animal Default Constructor Called" << std::endl;
}

Animal::Animal(const Animal &cp)
{
    std::cout << "Animal Copy Constructor Called" << std::endl;
    *this = cp;
}

Animal::~Animal()
{
    std::cout << "Animal Deconstructor Called" << std::endl;
}

Animal &Animal::operator=(const Animal &cp)
{
    std::cout << "Animal Assignation Operator Called" << std::endl;
    if (this == &cp)
        return (*this);
    this->_type = cp._type;
    return (*this);
}

void Animal::makeSound(void)
{
    std::cout << "this animal doesn't make sound" << std::endl;
}

std::string Animal::getType(void)
{
    return (this->_type);
}