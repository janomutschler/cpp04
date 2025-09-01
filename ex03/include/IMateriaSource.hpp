/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmutschl <jmutschl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 07:30:32 by jmutschl          #+#    #+#             */
/*   Updated: 2025/09/01 07:32:51 by jmutschl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include <string>

class AMateria;

class IMateriaSource
{
  public:
	IMateriaSource();
	IMateriaSource(const IMateriaSource& src);
	IMateriaSource& operator=(const IMateriaSource& src);
    virtual ~IMateriaSource();

    virtual void		learnMateria(AMateria* m) = 0;
    virtual AMateria*	createMateria(std::string const& type) = 0;
};

#endif
