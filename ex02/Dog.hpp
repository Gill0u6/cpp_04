/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 15:33:24 by agilles           #+#    #+#             */
/*   Updated: 2025/03/06 15:33:24 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
    private:
        Brain *_brain;

    public:
        Dog();
        Dog(const Dog &cp);

        ~Dog();

        Dog &operator=(const Dog &cp);

        void makeSound(void)const;

        void getIdeas(void)const;

        void setIdea(size_t i, std::string idea);
};
