/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgosselk <lgosselk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 10:46:12 by lgosselk          #+#    #+#             */
/*   Updated: 2024/04/15 09:48:59 by lgosselk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* Constructors/Destructor */

Cat::~Cat( void ) {
	delete this->getBrain();
	std::cout << this->getType() << " is dead" << std::endl;
}

Cat::Cat( void ): Animal( "Cat" ), _brain(new Brain()) {
    std::cout << "Default cat constructor called" << std::endl;
}

Cat::Cat( const Cat &copy ) {
	Animal::operator=(copy);
	this->setBrain(new Brain(*copy.getBrain()));
	std::cout << "Cloning cat constructor called" << std::endl;
}

Cat::Cat( const std::string type ): Animal(type), _brain(new Brain()) {
    std::cout << "Overload cat constructor called" << std::endl;
}

/* Operators */

Cat &Cat::operator=( const Cat& copy ) {
	if (this != &copy) {
		Animal::operator=(copy);
		delete this->getBrain();
		this->setBrain(new Brain(*copy.getBrain()));
	}
	std::cout << "Cat operator assigment called" << std::endl;
	return (*this);
}

/* Getters */

Brain *Cat::getBrain( void ) const {
	if (this->_brain)
		return (this->_brain);
	return (NULL);
}

std::string Cat::getIdea( const int &index ) const {
	if (this->getBrain() && !this->getBrain()->getIdea(index).empty())
		return (this->getBrain()->getIdea(index));
	return (NULL);
}

/* Setters */

void	Cat::setBrain( const Brain *brain ) {
	*this->_brain = *brain;
}

void    Cat::setIdea( const std::string &idea, const int &index ) {
	this->getBrain()->setIdea(idea, index);
}

/* Methods */

void    Cat::makeSound( void ) const {
	std::cout << "Give me food human, I say, Miau!" << std::endl;
}