/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 14:27:42 by agilles           #+#    #+#             */
/*   Updated: 2025/03/14 15:24:22 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}
Brain::Brain(const Brain &cp)
{
	*this = cp;
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain default destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &cp)
{
	if (this == &cp)
		return (*this);
	for (int i = 0; 1 < 100; i++)
	{
		if (cp._ideas[i].length() > 0)
			this->_ideas[i].assign(cp._ideas[i]);
	}
	return (*this);
}

const std::string Brain::getIdea(size_t i)
{
	
}

void Brain::setIdea(size_t i, std::string idea)
{

}
