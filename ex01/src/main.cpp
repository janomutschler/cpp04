/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmutschl <jmutschl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 13:13:45 by jmutschl          #+#    #+#             */
/*   Updated: 2025/08/31 20:49:01 by jmutschl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"
#include <iostream>

int main()
{
    const int size = 6;
    Animal* zoo[size];

    for (int i = 0; i < size / 2; i++) zoo[i] = new Dog();
    for (int i = size / 2; i < size; i++) zoo[i] = new Cat();

    for (int i = 0; i < size; i++) {
        zoo[i]->makeSound();
        delete zoo[i];
    }

    // Deep copy check
    Dog a;
    Dog b = a;  // copy constructor
    Dog c;
    c = a;      // assignment operator

    return 0;
}

