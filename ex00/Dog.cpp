/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgosselk <lgosselk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 10:46:29 by lgosselk          #+#    #+#             */
/*   Updated: 2024/04/05 10:21:22 by lgosselk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* Constructors/Destructor */

Dog::~Dog( void ) {
    std::cout << this->getType() << " is dead" << std::endl;
}

Dog::Dog( void ): Animal( "Dog" ) {
    std::cout << this->getType() << " created with default constructor" \
		<< std::endl;
}

Dog::Dog( const Dog &copy ): Animal(copy) {
    std::cout << "Cloning dog constructor called" << std::endl;
}

Dog::Dog( const std::string type ): Animal(type) {
    std::cout << this->getType() << " created with constructor" \
		<< std::endl;
}

/* Operators */

Dog &Dog::operator=( const Dog& copy ) {
    Animal::operator=(copy);
    std::cout << "Dog operator assigment called" << std::endl;
    return (*this);
}

/* Methods */

void    Dog::makeSound( void ) const {
    std::cout << "Give me food human, I say, Woof!" << std::endl;
}