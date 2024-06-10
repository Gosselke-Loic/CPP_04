/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgosselk <lgosselk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 11:06:04 by lgosselk          #+#    #+#             */
/*   Updated: 2024/04/05 11:32:44 by lgosselk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/* Constructors/Destructor */

WrongCat::~WrongCat( void ) {
    std::cout << this->getType() << " is dead" << std::endl;
}

WrongCat::WrongCat( void ): WrongAnimal( "WrongCat" ) {
    std::cout << this->getType() << " created with default constructor" \
		<< std::endl;
}

WrongCat::WrongCat( const WrongCat &copy ): WrongAnimal(copy) {
    std::cout << "Cloning cat constructor called" << std::endl;
}

WrongCat::WrongCat( const std::string type ): WrongAnimal(type) {
    std::cout << this->getType() << " created with constructor" \
		<< std::endl;
}

/* Operators */

WrongCat &WrongCat::operator=( const WrongCat& copy ) {
    WrongAnimal::operator=(copy);
    std::cout << "Cat operator assigment called" << std::endl;
    return (*this);
}

/* Methods */

void    WrongCat::makeSound( void ) const {
    std::cout << "Give me food human, I say, Woof!" << std::endl;
}