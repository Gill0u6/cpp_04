/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 15:27:12 by agilles           #+#    #+#             */
/*   Updated: 2025/03/17 16:20:53 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure();
		Cure(const Cure &cp);
		~Cure();

		Cure const &operator=(const Cure &cp);

		virtual AMateria	*clone(void)const;
		void				use(ICharacter &target);
};
