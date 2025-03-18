/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 17:35:33 by agilles           #+#    #+#             */
/*   Updated: 2025/03/18 17:42:06 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/AMateria.hpp"
#include "includes/Character.hpp"
#include "includes/Cure.hpp"
#include "includes/Ice.hpp"
#include "includes/ICharacter.hpp"
#include "includes/IMateriaSource.hpp"
#include "includes/MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
}
