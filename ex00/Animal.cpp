/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgosselk <lgosselk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 15:32:16 by lgosselk          #+#    #+#             */
/*   Updated: 2024/04/05 11:35:26 by lgosselk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/* Constructors/Destructor */

Animal::~Animal( void ) {
	std::cout << "An animal is dead" << std::endl;
}

Animal::Animal( void ): _type("undefined") {
	std::cout << "Animal of type: " << this->getType() << " created with default constructor" \
		<< std::endl;
}

Animal::Animal( const Animal &copy ) {
	*this = copy;
	std::cout << "Cloning constructor called" << std::endl;
}

Animal::Animal( const std::string type ): _type(type) {
	std::cout << "Animal of type: " << this->getType() << " created with constructor" \
		<< std::endl;
}

/* Overload operator */

Animal	&Animal::operator=( const Animal &copy ) {
    if (this != &copy)
	    this->setType(copy._type);
	std::cout << "Operator assigment called" << std::endl;
	return (*this);
}

/* Getters */

std::string	Animal::getType( void ) const {
	return (this->_type);
}

/* Setters */

void	Animal::setType( const std::string type ) {
	this->_type = type;
}

/* Methods */

void	Animal::makeSound( void ) const {
	std::cout << "A " << this->getType() << " make a sound" \
		<< std::endl;
}