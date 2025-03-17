/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 15:07:37 by agilles           #+#    #+#             */
/*   Updated: 2025/03/17 16:12:43 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice();
		Ice(const Ice &cp);
		~Ice();

		Ice const &operator=(const Ice &cp);

		virtual AMateria	*clone(void)const;
		void				use(ICharacter &target);
};
