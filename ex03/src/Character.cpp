/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 16:34:57 by agilles           #+#    #+#             */
/*   Updated: 2025/03/19 15:17:07 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"

Character::Character(): _name("default"), _inventory()
{
	std::cout << "Character default constructor called" << std::endl;
}

Character::Character(std::string const &name): _name(name), _inventory()
{
	std::cout << "Character named constructor called" << std::endl;
}

Character::Character(Character const &cp): ICharacter(cp), _inventory()
{
	this->_name = cp._name;
	for (int i = 0; i < 4; i++)
	{
		if (cp._inventory[i])
			this->_inventory[i] = cp._inventory[i];
	}
	std::cout << "Character copy constructor called" << std::endl;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	std::cout << "Character named " << this->_name << " get destroy" << std::endl;
}


Character const &Character::operator=(Character const &cp)
{
	this->_name = cp._name;
	return (*this);
}


std::string const &Character::getName()const
{
	return (this->_name);
}

void Character::setName(std::string const &name)
{
	this->_name = name;
}


void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (m && this->_inventory[i] == NULL)
		{
			if (inInventory(m))
				this->_inventory[i] = m->clone();
			else
				this->_inventory[i] = m;
			std::cout << "Materia " << m->getType() << " equip to " << this->_name << " inventory to index " << i << std::endl;
			return ;
		}
		if (m)
			std::cout << "Materia cannot be equip " << this->_name << "inventory is full !" << std::endl;
		else
			std::cout << "Error Invalid Materia try to be equip for " << this->_name << std::endl;
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && this->_inventory[idx])
	{
		std::cout << "Unequip " << this->_name << " Materia " << this->_inventory[idx] << " from slot " << idx << " of his inventory" << std::endl;
		this->_inventory[idx] = NULL;
	}
	else if (idx < 0 || idx >= 4)
		std::cout << "Cannot unequip Materia from wrong inventory slot" << std::endl;
	else
		std::cout << "Cannot unequip Materia, slot " << idx << " is emptry !" << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && this->_inventory[idx])
		this->_inventory[idx]->use(target);
	else if (idx < 0 || idx >= 4)
		std::cout << "Cannot use Materia from wrong inventory slot" << std::endl;
	else
		std::cout << "Cannot use Materia, slot " << idx << " is empty !" << std::endl;

}

int Character::inInventory(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == m)
			return (1);
	}
	return (0);
}

