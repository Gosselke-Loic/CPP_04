/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgosselk <lgosselk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 10:45:57 by lgosselk          #+#    #+#             */
/*   Updated: 2024/04/12 09:31:20 by lgosselk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/* Constructor/Destructor */

AMateria::~AMateria( void ) {}

AMateria::AMateria( void ): _type("") {}

AMateria::AMateria( const AMateria &copy ) {
	*this = copy;
	std::cout << "AMateria object copied" << std::endl;
}

AMateria::AMateria( std::string const &type ): _type(type) {
	std::cout << "AMateria object created!" << std::endl;
}

/* Operator */

AMateria	&AMateria::operator=( const AMateria& copy ) {
	this->setType(copy._type);
	std::cout << "AMateria assigment operator called" << std::endl;
	return (*this);
}

/* Getters */

std::string const	&AMateria::getType( void ) const {
	return (this->_type);
}

/* Setters */

void	AMateria::setType( const std::string &type ) {
	this->_type = type;
}

/* Methods */

void	AMateria::use( ICharacter &target ) {
	(void)target;
}