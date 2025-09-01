/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmutschl <jmutschl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 07:46:30 by jmutschl          #+#    #+#             */
/*   Updated: 2025/09/01 07:55:16 by jmutschl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

Cure::Cure() : AMateria("cure") {}
Cure::Cure(const Cure& src) : AMateria(src) {}

Cure& Cure::operator=(const Cure& src)
{
    if (this != &src)
        AMateria::operator=(src);
    return (*this);
}

Cure::~Cure() {}
