/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgosselk <lgosselk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:58:46 by lgosselk          #+#    #+#             */
/*   Updated: 2024/04/12 11:15:06 by lgosselk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/* Constructor/Destructor */

MateriaSource::MateriaSource( void ) {
    for (int i = 0; i < 4; i++) {
        this->setMateria(NULL, i);
    }
}

MateriaSource::~MateriaSource( void ) {
    this->removeMaterias();
	std::cout << "Materia source removed" << std::endl;
}

MateriaSource::MateriaSource( const MateriaSource &copy ) {
    for (int i = 0; i < 4; i++) {
        this->setMateria(NULL, i);
    }
    *this = copy;
    std::cout << "Materia source was copy" << std::endl;
}

/* Operator */

MateriaSource	&MateriaSource::operator=( const MateriaSource &copy ) {
    if (this != &copy) {
		this->removeMaterias();
        for (int i = 0; i < 4; i++) {
			if (copy.getMateria(i))
            	this->setMateria(copy.getMateria(i)->clone(), i);
            else
               this->setMateria(NULL, i); 
        }
    }
    return (*this);
}

/* Getters */

AMateria	*MateriaSource::getMateria( const int index ) const {
	if (index >= 0 && index < 4)
		return (this->_aMaterias[index]);
	return (NULL);
}

/* Setters */

void	MateriaSource::setMateria( AMateria *materia, const int index ) {
	this->_aMaterias[index] = materia;
}

/* Methods */

void MateriaSource::learnMateria( AMateria *materia ) {

	bool	equiped = false;

    if (materia == NULL)
		return ;
	if (this->inInventory(materia)) {
		std::cout << "Materia: " << RED << materia->getType() << DEFAULT \
			<< "is already in the inventory" << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++) {
		if (this->getMateria(i) == NULL) {
			equiped = true;
			this->setMateria(materia, i);
			std::cout << "Materia learned at index " << YELLOW << i \
				<< DEFAULT << std::endl;
			return ;
		}
	}
	if (!equiped) {
		std::cout << "Materia source is " << YELLOW << "full" << DEFAULT \
			<< std::endl;
		delete materia;
	}
}

AMateria	*MateriaSource::createMateria( std::string const &type ) {
	if (type.empty())
		return (NULL);
    for (int i = 0; i < 4; i++) {
        if (this->getMateria(i) && this->getMateria(i)->getType() == type)
            return (this->getMateria(i)->clone());
    }
    std::cout << "Cannot create materia with type: " << RED << type \
		<< DEFAULT << std::endl;
	return (NULL);
}

void	MateriaSource::removeMaterias( void ) {
	for (int i = 0; i < 4; i++) {
        if (this->getMateria(i))
            delete this->getMateria(i);
    }
}

bool    MateriaSource::inInventory( AMateria *materia ) {
    for (int i = 0; i < 4; i++) {
        if (this->getMateria(i) && this->getMateria(i) == materia)
            return (true);
    }
    return (false);
}