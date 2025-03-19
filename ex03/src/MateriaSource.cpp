/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 16:58:04 by agilles           #+#    #+#             */
/*   Updated: 2025/03/19 15:13:20 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MateriaSource.hpp"

MateriaSource::MateriaSource(): IMateriaSource()
{
	std::cout << "MateriaSource Default constructor called" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &cp): IMateriaSource(cp)
{
	std::cout << "MateriaSource Copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (cp._learnInventory[i])
			this->_learnInventory[i] = cp._learnInventory[i];
	}
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource Deconstructor called" << std::endl;
}

MateriaSource const &MateriaSource::operator=(MateriaSource const &cp)
{
	(void)cp;
	std::cout << "MateriaSource assignation operator called" << std::endl;
	return (*this);
}

void MateriaSource::learnMateria(AMateria *materia) //?
{
	for (int i = 0; i < 4; i++)
	{
		if (materia && this->_learnInventory[i] == NULL)
		{
			this->_learnInventory[i] = materia;
			std::cout << "Materia " << materia->getType() << " added to learnInventory at index " << i << std::endl;
			return ;
		}
	}
	std::cout << "learnInventory already full !" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const &type) //?
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_learnInventory[i] && this->_learnInventory[i]->getType() == type)
			return (this->_learnInventory[i]->clone());
	}
	std::cout << "Cannot create a Materia with learnInventory type not valid or not in learnInventory" << std::endl;
	return (NULL);
}

