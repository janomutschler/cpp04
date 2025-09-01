/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmutschl <jmutschl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 07:46:26 by jmutschl          #+#    #+#             */
/*   Updated: 2025/09/01 08:04:06 by jmutschl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"
#include <iostream>

Character::Character() : _name("default"), _groundTop(0)
{
    for (int i = 0; i < INVENTORY_SIZE; i++) _inv[i] = NULL;
    for (int i = 0; i < GROUND_SIZE; i++) _ground[i] = NULL;
}

Character::Character(std::string const& name) : _name(name), _groundTop(0)
{
    for (int i = 0; i < INVENTORY_SIZE; i++) _inv[i] = NULL;
    for (int i = 0; i < GROUND_SIZE; i++) _ground[i] = NULL;
}

Character::Character(const Character& src) : _name(src._name), _groundTop(0)
{
    for (int i = 0; i < INVENTORY_SIZE; i++) _inv[i] = NULL;
    for (int i = 0; i < GROUND_SIZE; i++) _ground[i] = NULL;
    _copyInventory(src);
}

Character& Character::operator=(const Character& src)
{
    if (this != &src)
	{
        _name = src._name;
        _clearInventory();
        _copyInventory(src);
    }
    return (*this);
}

Character::~Character() { _clearInventory(); }

void Character::_clearInventory()
{
    for (int i = 0; i < INVENTORY_SIZE; i++)
	{
        delete _inv[i];
        _inv[i] = NULL;
    }
}

void Character::_copyInventory(const Character& src)
{
    for (int i = 0; i < INVENTORY_SIZE; i++)
	{
        if (src._inv[i])
            _inv[i] = src._inv[i]->clone();
        else
            _inv[i] = NULL;
    }
}
