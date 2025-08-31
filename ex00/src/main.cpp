/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmutschl <jmutschl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 13:13:45 by jmutschl          #+#    #+#             */
/*   Updated: 2025/08/31 14:25:22 by jmutschl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

//int main()
//{
//	const Animal* meta = new Animal();
//	const Animal* j = new Dog();
//	const Animal* i = new Cat();
//	const WrongAnimal* wrongAn = new WrongAnimal();
//	const WrongAnimal* wrongCat = new WrongCat();
//	std::cout << "Correct Animal dog and cat:\n";
//	std::cout << j->getType() << " " << std::endl;
//	std::cout << i->getType() << " " << std::endl;
//	i->makeSound(); 	//output the cat sound;
//	j->makeSound(); 	//output the dog sound;
//	meta->makeSound();	//output the animal sound;

//	delete meta;
//	delete j;
//	delete i;

//	std::cout << "Wro0ng Animal and cat:\n";
//	std::cout << wrongAn->getType() << "\n";
//	std::cout << wrongCat->getType() << "\n";
//	wrongAn->makeSound();
//	wrongCat->makeSound();
	
//	delete wrongAn;
//	delete wrongCat;
//	return (0);
//}


int main() {
    std::cout << "==================== TEST 1: Constructors ====================\n";
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << "\n==================== TEST 2: Types ====================\n";
    std::cout << "Dog type: " << j->getType() << std::endl;
    std::cout << "Cat type: " << i->getType() << std::endl;
    std::cout << "Animal type: " << meta->getType() << std::endl;

    std::cout << "\n==================== TEST 3: Sounds ====================\n";
    i->makeSound();   // should output cat sound
    j->makeSound();   // should output dog sound
    meta->makeSound(); // should output generic animal sound

    std::cout << "\n==================== TEST 4: WrongAnimal vs WrongCat ====================\n";
    const WrongAnimal* wa = new WrongAnimal();
    const WrongAnimal* wc = new WrongCat();

    std::cout << "WrongAnimal type: " << wa->getType() << std::endl;
    std::cout << "WrongCat type: " << wc->getType() << std::endl;

    wa->makeSound();  // generic WrongAnimal sound
    wc->makeSound();  // ❌ also WrongAnimal sound (not virtual!)

    std::cout << "\n==================== TEST 5: Direct WrongCat ====================\n";
    WrongCat directWrongCat;
    directWrongCat.makeSound(); // ✅ "WrongCat sound" because not polymorphic here

    std::cout << "\n==================== TEST 6: Copy and Assignment ====================\n";
    Dog dog1;
    Dog dog2(dog1);       // copy ctor
    Dog dog3;
    dog3 = dog1;          // assignment

    std::cout << "\n==================== TEST 7: Destructors ====================\n";
    delete meta;
    delete j;
    delete i;
    delete wa;
    delete wc;

    std::cout << "============================================================\n";
    return 0;
}
