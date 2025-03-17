/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 15:54:00 by agilles           #+#    #+#             */
/*   Updated: 2025/03/17 16:03:23 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/AMateria.hpp"

AMateria::AMateria(std::string const &type): _type(type)
{
	std::cout << "AMateria Type Construcor called with this type" << type << std::endl;
}

AMateria::AMateria(AMateria const &copy)
{
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = copy;
}


AMateria::~AMateria(void)
{
	std::cout << "AMateria Deconstructor called" << std::endl;
}


AMateria const &AMateria::operator=(AMateria const &copy)
{
	std::cout << "AMateria Assignation Operator called" << std::endl;
	if (this == &copy)
		return (*this);
	this->_type = copy._type;
	return (*this);
}

std::string const &AMateria::getType()const
{
	return (this->_type);
}
