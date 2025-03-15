/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 15:33:10 by agilles           #+#    #+#             */
/*   Updated: 2025/03/15 15:44:39 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
    this->_type = "Cat";
    try
    {
        this->_brain = new Brain();
    }
    catch (const std::bad_alloc &e)
    {
        std::cerr << "Cat Brain allocation fail Exiting the process now." << e.what() << std::endl;
        exit(1);
    }
    std::cout << "Cat Default Constructor Called" << std::endl;
}

Cat::Cat(const Cat &cp): Animal(cp)
{
    *this = cp;
    std::cout << "Cat Copy Constructor Called" << std::endl;
}

Cat::~Cat()
{
    delete (this->_brain);
    std::cout << "Cat Deconstructor Called" << std::endl;
}

Cat &Cat::operator=(const Cat &cp)
{
    std::cout << "Cat Assignation operator called" << std::endl;
    if (this == &cp)
        return (*this);
    this->_type = cp._type;
    try
    {
        this->_brain = new Brain(*cp._brain);
        std::cout << "Brain Copy for cat" << std::endl;
    }
    catch (const std::bad_alloc &e)
    {
        std::cerr << "Cat Brain allocation fail Exiting the process now." << e.what() << std::endl;
        exit(1);
    }
    return (*this);
}

void Cat::makeSound(void)const
{
    std::cout << this->getType() << " say Miaw Miaw" << std::endl;
}

void Cat::getIdeas(void)const
{
    for (int i = 0; i < 3; i++)
        std::cout << "Cat get Idea :" << this->_brain->getIdea(i) << std::endl;
}

void Cat::setIdea(size_t i, std::string idea)
{
    this->_brain->setIdea(i, idea);
}
