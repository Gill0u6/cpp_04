/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 15:33:06 by agilles           #+#    #+#             */
/*   Updated: 2025/03/06 15:33:06 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void Animal::makeSound(void)const
{
    std::cout << "this animal doesn't make sound" << std::endl;
}

std::string Animal::getType(void)const
{
    return (this->_type);
}
