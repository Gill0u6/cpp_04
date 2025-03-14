/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 16:06:29 by agilles           #+#    #+#             */
/*   Updated: 2025/03/06 16:19:06 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("WrongDefault")
{
	std::cout << "WrongAnimal Default Constructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &cp)
{
	*this = cp;
	std::cout << "WrongAnimal Copy Constructor Called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Deconstructor Called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &cp)
{
	std::cout << "WrongAnimal Assignation Operator Called" << std::endl;
	if (this == &cp)
		return (*this);
	this->_type = cp._type;
	return (*this);
}

void WrongAnimal::makeSound(void)const
{
	std::cout << this->getType() << " say: wrong animal noise" << std::endl;
}

std::string WrongAnimal::getType(void)const
{
	return (this->_type);
}
