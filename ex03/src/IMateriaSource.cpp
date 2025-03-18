/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 16:54:05 by agilles           #+#    #+#             */
/*   Updated: 2025/03/18 17:05:49 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/IMateriaSource.hpp"


IMateriaSource::IMateriaSource(void)
{
	std::cout << "IMateria Default constructor called" << std::endl;
}

IMateriaSource::IMateriaSource(IMateriaSource const &copy)
{
	std::cout << "IMateria Copy constructor called" << std::endl;
	*this = copy;
}

IMateriaSource const &IMateriaSource::operator=(IMateriaSource const &copy)
{
	(void)copy;
	std::cout << "IMateria assignation operator called" << std::endl;
	return (*this);
}

