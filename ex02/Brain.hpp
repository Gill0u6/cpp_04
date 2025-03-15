/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 14:27:40 by agilles           #+#    #+#             */
/*   Updated: 2025/03/15 14:40:07 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Brain
{
	private:

		std::string _ideas[100];

	public:

		Brain();
		Brain(const Brain &cp);

		virtual ~Brain();

		Brain &operator=(const Brain &cp);

		const std::string getIdea(size_t i);

		void setIdea(size_t i, std::string idea);
};
