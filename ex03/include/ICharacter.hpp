/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmutschl <jmutschl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 07:24:12 by jmutschl          #+#    #+#             */
/*   Updated: 2025/09/01 07:31:38 by jmutschl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <string>

class AMateria;

class ICharacter
{
  public:
    ICharacter();
    ICharacter(const ICharacter& src);
    ICharacter& operator=(const ICharacter& src);
    virtual ~ICharacter();

    virtual std::string const&	getName() const = 0;
	
    virtual void				equip(AMateria* m) = 0;
    virtual void				unequip(int idx) = 0;
    virtual void				use(int idx, ICharacter& target) = 0;
};

#endif
