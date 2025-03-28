/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:51:39 by agilles           #+#    #+#             */
/*   Updated: 2025/03/19 15:04:34 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

#include "ICharacter.hpp"
#include <iostream>

class ICharacter;

class AMateria
{
	protected:
		std::string _type;

		AMateria(std::string const &type);
		AMateria(AMateria const &copy);

	public:
		virtual ~AMateria(void);

		AMateria const	&operator=(AMateria const &copy);

		virtual AMateria	*clone()const = 0;
		virtual void		use(ICharacter& target) = 0;

		std::string const	&getType()const;
};
