/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 15:33:10 by agilles           #+#    #+#             */
/*   Updated: 2025/03/14 13:51:26 by agilles          ###   ########.fr       */
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
    std::cout << "Cat Copy Constructor Called" << std::endl;
}

Cat::~Cat()
{
    delete (this->_brain);
    std::cout << "Cat Deconstructor Called" << std::endl;
}

void Cat::makeSound(void)const
{
    std::cout << this->getType() << " say Miaw Miaw" << std::endl;
}
