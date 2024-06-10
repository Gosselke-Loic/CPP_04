/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgosselk <lgosselk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 10:46:12 by lgosselk          #+#    #+#             */
/*   Updated: 2024/04/05 10:27:18 by lgosselk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* Constructors/Destructor */

Cat::~Cat( void ) {
    std::cout << this->getType() << " is dead" << std::endl;
}

Cat::Cat( void ): Animal( "Cat" ) {
    std::cout << this->getType() << " created with default constructor" \
		<< std::endl;
}

Cat::Cat( const Cat &copy ): Animal(copy) {
    std::cout << "Cloning cat constructor called" << std::endl;
}

Cat::Cat( const std::string type ): Animal(type) {
    std::cout << this->getType() << " created with constructor" \
		<< std::endl;
}

/* Operators */

Cat &Cat::operator=( const Cat& copy ) {
    Animal::operator=(copy);
    std::cout << "Cat operator assigment called" << std::endl;
    return (*this);
}

/* Methods */

void    Cat::makeSound( void ) const {
    std::cout << "Give me food human, I say, Miau!" << std::endl;
}