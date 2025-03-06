/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 15:33:15 by agilles           #+#    #+#             */
/*   Updated: 2025/03/06 17:04:35 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongCat.hpp"

int main()
{
	std::cout << std::endl << "TESTING ANIMAL" << std::endl;
	{
		std::cout << "\033[34mConstructing\033[0m" << std::endl;
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << "\033[34mTesting\033[0m" << std::endl;
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		j->makeSound();
		meta->makeSound();
		std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
		delete meta;
		delete i;
		delete j;
	}
	std::cout << std::endl << std::endl;
	std::cout << std::endl << "TESTING WRONGANIMAL" << std::endl;
	{
		std::cout << "\033[34mConstructing\033[0m" << std::endl;
		const WrongAnimal* met = new WrongAnimal();
		const WrongAnimal* k = new WrongCat();
		std::cout << "\033[34mTesting\033[0m" << std::endl;
		std::cout << k->getType() << " " << std::endl;
		std::cout << met->getType() << " " << std::endl;
		k->makeSound();
		met->makeSound();
		std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
		delete k;
		delete met;
	}


	return 0;
}
