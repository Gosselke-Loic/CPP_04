/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgosselk <lgosselk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 10:54:27 by lgosselk          #+#    #+#             */
/*   Updated: 2024/04/11 15:31:25 by lgosselk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/* Constructor/Destructor */

Ice::~Ice( void ) {}

Ice::Ice( const Ice &copy ): AMateria(copy) {
    std::cout << "Ice copied" << std::endl;
}

Ice::Ice( void ): AMateria("ice") {
    std::cout << "Ice AMateria object created" << std::endl;
}

/* Operator */

Ice &Ice::operator=( const Ice &copy ) {
    this->setType(copy._type);
    return (*this);
}

/* Methods */

AMateria    *Ice::clone( void ) const {
    return (new Ice(*this));
}

void    Ice::use( ICharacter &target ) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}