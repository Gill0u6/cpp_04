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
    std::cout << "Dog Default Constructor Called" << std::endl;
}

Dog::Dog(const Dog &cp): Animal(cp)
{
    std::cout << "Dog Copy Constructor Called" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog Deconstructor Called" << std::endl;
}

void Dog::makeSound(void)const
{
    std::cout << this->getType() << " say Woof Woof" << std::endl;
}
