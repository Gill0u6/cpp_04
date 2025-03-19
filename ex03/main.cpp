/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 17:35:33 by agilles           #+#    #+#             */
/*   Updated: 2025/03/19 15:29:06 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ICharacter.hpp"
#include "includes/AMateria.hpp"
#include "includes/Character.hpp"
#include "includes/Cure.hpp"
#include "includes/Ice.hpp"
#include "includes/IMateriaSource.hpp"
#include "includes/MateriaSource.hpp"

int main()
{
	std::cout << "\033[34mConstructing\033[0m" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	std::cout << "\033[34mTesting\033[0m" << std::endl;
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->equip(tmp);
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(4, *bob);
	me->use(-3, *bob);
	std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
	delete bob;
	delete me;
	delete src;
	return 0;
}
