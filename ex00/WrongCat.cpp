/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 16:06:13 by agilles           #+#    #+#             */
/*   Updated: 2025/03/06 16:48:20 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
	this->_type = "WrongCat";
	std::cout << "wrongCat Default Constructor Called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &cp): WrongAnimal(cp)
{
	std::cout << "WrongCat Copy Constructor Called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor Called" << std::endl;
}

void WrongCat::makeSound(void)const
{
	std::cout << this->getType() << " say : WrongCat noise" << std::endl;
}
