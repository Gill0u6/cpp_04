/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 15:47:59 by agilles           #+#    #+#             */
/*   Updated: 2025/03/17 15:51:16 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria	*_learnInventory[4];

	public:
		MateriaSource();
		MateriaSource(MateriaSource const &cp);
		~MateriaSource();

		MateriaSource const operator=(MateriaSource const &cp);

		virtual void		learnMateria(AMateria *materia);
		virtual AMateria*	createMateria(std::string const & type);
		int					inLearnInventory(AMateria *materia);
};
