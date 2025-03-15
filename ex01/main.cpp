/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 15:33:15 by agilles           #+#    #+#             */
/*   Updated: 2025/03/15 16:00:48 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	std::cout << "Testing Subject test" << std::endl;
	{
		std::cout << "\033[34mConstructing\033[0m" << std::endl;
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
		delete j;//should not create a leak
		delete i;
	}

	std::cout << std::endl << std::endl << "Testing My test" << std::endl;
	{
		std::cout << "\033[34mConstructing\033[0m" << std::endl;
		// Cat *a = new Cat();
		Dog *a = new Dog();
		if (a == NULL)
		{
			perror("Allocation failed");
			std::cerr << "Exiting the process now." << std::endl;
			exit(1);
		}

		a->setIdea(0, "I Want to eat");
		a->setIdea(1, "I Want to pee");
		a->setIdea(2, "I Want to sniff something");
		a->setIdea(3, "I Want to annoy an Human");
		a->setIdea(101, "some shit");

		// Cat *b = new Cat(*a);
		Dog *b = new Dog(*a);

		a->getIdeas();
		std::cout << std::endl;
		b->setIdea(1, "MIAW MIAW MIAW");
		b->getIdeas();
		if (b == NULL)
		{
			perror("Allocation failed");
			std::cerr << "Exiting the process now." << std::endl;
			exit(1);
		}
		std::cout << std::endl;

		std::cout << "\033[34mTesting a\033[0m" << std::endl;
		std::cout << "The " << a->getType() << " a has the following ideas: " << std::endl;
		a->getIdeas();
		std::cout << std::endl;

		std::cout << "\033[34mDeconstructing a\033[0m" << std::endl;
		delete(a);
		std::cout << std::endl;

		std::cout << "\033[34mTesting b\033[0m" << std::endl;
		std::cout << "The " << b->getType() << " b has the following ideas: " << std::endl;
		b->getIdeas();
		std::cout << std::endl;

		std::cout << "\033[34mDeconstructing b\033[0m" << std::endl;
		delete(b);
	}

	return (0);
}
