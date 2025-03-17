/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 16:19:47 by agilles           #+#    #+#             */
/*   Updated: 2025/03/17 16:20:36 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Cure.hpp"

Cure::Cure(): AMateria("cure")
{
	std::cout << "Cure Default constructor called" << std::endl;
}

Cure::Cure(const Cure &cp): AMateria(cp)
{
	std::cout << "Cure Copy constructor called" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure Deconstructor called" << std::endl;
}


Cure const &Cure::operator=(const Cure &cp)
{
	if (this == &cp)
		return (*this);
	this->_type = cp._type;
	return (*this);
}

AMateria *Cure::clone(void)const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
