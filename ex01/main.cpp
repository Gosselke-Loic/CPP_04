/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgosselk <lgosselk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 15:32:41 by lgosselk          #+#    #+#             */
/*   Updated: 2024/04/10 10:13:23 by lgosselk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

#define N_ANIMALS 10

int main()
{
	const Animal	*tabAnimals[N_ANIMALS];

	for (int i = 0; i < N_ANIMALS; i++)
	{
		if (i % 2 == 0) {
			std::cout << i << ": Cat" << std::endl;
			tabAnimals[i] = new Cat();
		}
		else {
			std::cout << i << ": Dog" << std::endl;
			tabAnimals[i] = new Dog();
		}
	}
	std::cout << std::endl;
	std::cout << tabAnimals[0]->getType() << std::endl;
	std::cout << tabAnimals[9]->getType() << std::endl;
	tabAnimals[0]->makeSound();
	tabAnimals[9]->makeSound();
	for (int i = 0; i < N_ANIMALS; i++) {
		delete tabAnimals[i];
	}

	std::cout << std::endl; // Assigment

	Dog *doggy = new Dog("Henry");
	Dog *doggy2 = new Dog("Henry2");
	doggy->setIdea("I'm hungry", 0);
	std::cout << "Doggy: " << doggy->getIdea(0) << std::endl;
	*doggy2 = *doggy;
	std::cout << "Doggy2: " << doggy2->getIdea(0) << std::endl;
    doggy->setIdea("I'm very hungry", 0);
    std::cout << "Doggy2: " << doggy2->getIdea(0) << std::endl;
	delete doggy;
	delete doggy2;

	std::cout << std::endl; // copy constructor

	Cat *kitty = new Cat("Sifu");
    kitty->setIdea("I'm hungry", 0);
    std::cout << "kitty: " << kitty->getIdea(0) << std::endl;
	Cat *kitty2 = new Cat(*kitty);
	std::cout << "Kitty2: " << kitty2->getIdea(0) << std::endl;
    kitty->setIdea("I'm very hungry", 0);
    std::cout << "Kitty2: " << kitty2->getIdea(0) << std::endl;
	delete kitty;
	delete kitty2;

	return (0);
}