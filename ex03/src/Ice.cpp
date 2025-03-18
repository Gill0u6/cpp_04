/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 16:11:19 by agilles           #+#    #+#             */
/*   Updated: 2025/03/18 17:05:49 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"

Ice::Ice(): AMateria("ice")
{
	std::cout << "Ice Default constructor called" << std::endl;
}

Ice::Ice(const Ice &cp): AMateria(cp)
{
	std::cout << "Ice Copy constructor called" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice Deconstructor called" << std::endl;
}


Ice const &Ice::operator=(const Ice &cp)
{
	if (this == &cp)
		return (*this);
	this->_type = cp._type;
	return (*this);
}

AMateria *Ice::clone(void)const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

