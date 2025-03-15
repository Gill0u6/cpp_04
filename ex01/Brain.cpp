/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 14:27:42 by agilles           #+#    #+#             */
/*   Updated: 2025/03/15 15:41:45 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}
Brain::Brain(const Brain &cp)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = cp;
}

Brain::~Brain()
{
	std::cout << "Brain default destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &cp)
{
	std::cout << "Brain Assignation operator called" << std::endl;
	if (this == &cp)
		return (*this);
	for (int i = 0; i < 100; i++)
			this->_ideas[i].assign(cp._ideas[i]);
	return (*this);
}

const std::string Brain::getIdea(size_t i)
{
	if (i < 100)
		return (this->_ideas[i]);
	else
		return ("There is only 100 Ideas in a Brain");
}

void Brain::setIdea(size_t i, std::string idea)
{
	if (i < 100)
		this->_ideas[i] = idea;
	else
		std::cout << "There is only 100 Ideas in a Brain" << std::endl;
}
