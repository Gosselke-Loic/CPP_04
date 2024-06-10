/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgosselk <lgosselk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 10:46:29 by lgosselk          #+#    #+#             */
/*   Updated: 2024/04/15 09:47:25 by lgosselk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* Constructors/Destructor */

Dog::~Dog( void ) {
	delete this->getBrain();
	std::cout << this->getType() << " is dead" << std::endl;
}

Dog::Dog( void ): Animal( "Dog" ), _brain(new Brain()) {
	std::cout << "Default dog constructor called" << std::endl;
}

Dog::Dog( const Dog &copy ) {
	Animal::operator=(copy);
	this->setBrain(new Brain(*copy.getBrain()));
	std::cout << "Cloning dog constructor called" << std::endl;
}

Dog::Dog( const std::string type ): Animal(type), _brain(new Brain()) {
	std::cout << "Overload dog constructor called" << std::endl;
}

/* Operators */

Dog	&Dog::operator=( const Dog& copy ) {
	if (this != &copy) {
		Animal::operator=(copy);
		delete this->getBrain();
		this->setBrain(new Brain(*copy.getBrain()));
	}
	std::cout << "Dog operator assigment called" << std::endl;
	return (*this);
}

/* Getters */

Brain	*Dog::getBrain( void ) const {
	if (this->_brain)
		return (this->_brain);
	return (NULL);
}

std::string Dog::getIdea( const int &index ) const {
	if (this->getBrain() && !this->getBrain()->getIdea(index).empty())
		return (this->getBrain()->getIdea(index));
	return (NULL);
}

/* Setters */

void	Dog::setBrain( const Brain *brain ) {
	*this->_brain = *brain;
}

void    Dog::setIdea( const std::string &idea, const int &index ) {
	this->getBrain()->setIdea(idea, index);
}

/* Methods */

void	Dog::makeSound( void ) const {
	std::cout << "Give me food human, I say, Woof!" << std::endl;
}