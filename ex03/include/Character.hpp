/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmutschl <jmutschl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 07:36:46 by jmutschl          #+#    #+#             */
/*   Updated: 2025/09/01 07:39:23 by jmutschl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include <string>

class AMateria;

#define INVENTORY_SIZE 4
#define GROUND_SIZE    16

class Character : public ICharacter
{
  private:
    std::string _name;
    AMateria*   _inv[INVENTORY_SIZE];
    AMateria*   _ground[GROUND_SIZE];
    int         _groundTop;

    // helper to clear inventory
    void _clearInventory();
    // helper to deep-copy from another
    void _copyInventory(const Character& other);

  public:
    Character();
    Character(const Character& other);
    Character& operator=(const Character& other);
    virtual ~Character();

    Character(std::string const& name);

    virtual void				equip(AMateria* m);
    virtual void				unequip(int idx);
    virtual void				use(int idx, ICharacter& target);
    virtual std::string const&	getName() const;
};

#endif
