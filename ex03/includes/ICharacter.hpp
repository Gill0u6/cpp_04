/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:53:30 by agilles           #+#    #+#             */
/*   Updated: 2025/03/17 16:40:20 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class ICharacter
{
	protected:
		ICharacter(void);
		ICharacter(ICharacter const &cp);

		ICharacter const &operator=(ICharacter const &cp);
	public:
		virtual ~ICharacter() { std::cout << "ICharacter deconstructor called" << std::endl; }

		virtual std::string const &getName()const = 0;

		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};
