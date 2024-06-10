/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgosselk <lgosselk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 11:05:45 by lgosselk          #+#    #+#             */
/*   Updated: 2024/04/05 11:34:45 by lgosselk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/* Constructors/Destructor */

WrongAnimal::~WrongAnimal( void ) {
	std::cout << "A WrongAnimal is dead" << std::endl;
}

WrongAnimal::WrongAnimal( void ): _type("undefined") {
	std::cout << "WrongAnimal of type: " << this->getType() << " created with default constructor" \
		<< std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal &copy ) {
	*this = copy;
	std::cout << "Cloning constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( const std::string type ): _type(type) {
	std::cout << "WrongAnimal of type: " << this->getType() << " created with base constructor" \
		<< std::endl;
}

/* Overload operator */

WrongAnimal	&WrongAnimal::operator=( const WrongAnimal &copy ) {
    if (this != &copy)
	    this->setType(copy._type);
	std::cout << "Operator assigment called" << std::endl;
	return (*this);
}

/* Getters */

std::string	WrongAnimal::getType( void ) const {
	return (this->_type);
}

/* Setters */

void	WrongAnimal::setType( const std::string type ) {
	this->_type = type;
}

/* Methods */

void	WrongAnimal::makeSound( void ) const {
	std::cout << "A wrongAnimal " << this->getType() << " make a sound" \
		<< std::endl;
}