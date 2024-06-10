/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgosselk <lgosselk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 10:53:52 by lgosselk          #+#    #+#             */
/*   Updated: 2024/04/12 11:16:55 by lgosselk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/* Constructor/Destructor */

Cure::~Cure( void ) {}

Cure::Cure( const Cure &copy ): AMateria(copy) {
    std::cout << "Cure copied" << std::endl;
}

Cure::Cure( void ): AMateria("cure") {
    std::cout << "Cure AMateria object created" << std::endl;
}

/* Operator */

Cure &Cure::operator=( const Cure &copy ) {
    this->setType(copy._type);
    return (*this);
}

/* Methods */

AMateria    *Cure::clone( void ) const {
    return (new Cure(*this));
}

void    Cure::use( ICharacter &target ) {
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}