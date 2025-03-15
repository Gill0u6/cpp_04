/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 15:33:18 by agilles           #+#    #+#             */
/*   Updated: 2025/03/06 15:33:18 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

#include <cstdio>
#include <cstdlib>

class Animal
{
    protected:
        std::string _type;

    public:
        Animal();
        Animal(const Animal &cp);

        virtual ~Animal();

        Animal &operator=(const Animal &cp);

        virtual void makeSound(void)const = 0;

        std::string getType(void)const;
};
