/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 16:38:27 by agilles           #+#    #+#             */
/*   Updated: 2025/03/17 16:52:01 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ICharacter.hpp"

ICharacter::ICharacter(void)
{
	std::cout << "ICharacter default constructor called" << std::endl;
}
ICharacter::ICharacter(ICharacter const &cp)
{
	*this = cp;
	std::cout << "ICharacter copy constructor called" << std::endl;
}

ICharacter const &ICharacter::operator=(ICharacter const &cp)
{
	(void)cp;
	std::cout << "ICharacter assignement operator called" << std::endl;
	return (*this);
}
