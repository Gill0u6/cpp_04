/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 15:33:13 by agilles           #+#    #+#             */
/*   Updated: 2025/03/06 15:33:13 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
    this->_type = "Dog";
    try
    {
        this->_brain = new Brain();
    }
    catch (const std::bad_alloc &e)
    {
        std::cerr << "Dog Brain allocation fail Exiting the process now." << e.what() << std::endl;
        exit(1);
    }
    std::cout << "Dog Default Constructor Called" << std::endl;
}

Dog::Dog(const Dog &cp): Animal(cp)
{
    *this = cp;
    std::cout << "Dog Copy Constructor Called" << std::endl;
}

Dog::~Dog()
{
    delete (this->_brain);
    std::cout << "Dog Deconstructor Called" << std::endl;
}

Dog &Dog::operator=(const Dog &cp)
{
    std::cout << "Dog Assignation operator called" << std::endl;
    if (this == &cp)
        return (*this);
    this->_type = cp._type;
    try
    {
        this->_brain = new Brain(*cp._brain);
        std::cout << "Brain Copy for Dog" << std::endl;
    }
    catch (const std::bad_alloc &e)
    {
        std::cerr << "Dog Brain allocation fail Exiting the process now." << e.what() << std::endl;
        exit(1);
    }
    return (*this);
}

void Dog::makeSound(void)const
{
    std::cout << this->getType() << " say Miaw Miaw" << std::endl;
}

void Dog::getIdeas(void)const
{
    for (int i = 0; i < 3; i++)
        std::cout << "Dog get Idea :" << this->_brain->getIdea(i) << std::endl;
}

void Dog::setIdea(size_t i, std::string idea)
{
    this->_brain->setIdea(i, idea);
}
