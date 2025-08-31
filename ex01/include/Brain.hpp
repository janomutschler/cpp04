/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmutschl <jmutschl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 20:04:58 by jmutschl          #+#    #+#             */
/*   Updated: 2025/08/31 20:48:18 by jmutschl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class	Brain
{
	private:
		std::string _ideas[100];

	public:
		Brain();
		Brain(const Brain& src);
		Brain& operator=(const Brain& src);
		~Brain();
};

#endif