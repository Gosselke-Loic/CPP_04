/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgosselk <lgosselk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 10:57:10 by lgosselk          #+#    #+#             */
/*   Updated: 2024/04/12 11:19:37 by lgosselk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/* Constructor/Destructor */

Character::~Character( void ) {
	this->removeGarbage();
	this->removeInventory();
	std::cout << "Save slot removed for " << YELLOW << this->getName() \
		<< DEFAULT << ", " << GREEN << "thanks for playing!" << DEFAULT \
		<< std::endl;
}

Character::Character( void ): _name("default") {
	for (int i = 0; i < 4; i++) {
		this->setGarbage(NULL, i);
		this->setInventory(NULL, i);
	}
}

Character::Character( const std::string name ): _name(name) {
	for (int i = 0; i < 4; i++) {
		this->setGarbage(NULL, i);
		this->setInventory(NULL, i);
	}
	std::cout << "An Character was born! " << GREEN << "Hero? " << DEFAULT << "or" \
		<< RED << " Villain?" << DEFAULT << std::endl;
}

Character::Character( const Character &copy ) {
	for (int i = 0; i < 4; i++) {
		this->setGarbage(NULL, i);
		this->setInventory(NULL, i);
	}
	this->setName(copy.getName());
	for (int i = 0; i < 4; i++) {
		if (copy.getInventory(i))
			this->setInventory(copy.getInventory(i)->clone(), i);
		else
			this->setInventory( NULL, i);
	}
	std::cout << GREEN << "Character was cloned!" << DEFAULT << std::endl;
}

/* Operator */

Character	&Character::operator=( const Character &copy ) {
	if (this != &copy) {
		this->removeGarbage();
		this->removeInventory();
		this->setName(copy.getName());
		for (int i = 0; i < 4; i++) {
			if (copy.getInventory(i))
				this->setInventory(copy.getInventory(i)->clone(), i);
			else
				this->setInventory( NULL, i);
		}
	}
	return (*this);
}

/* Getters */

std::string const	&Character::getName( void ) const {
	return (this->_name);
}

AMateria	*Character::getInventory( const int index ) const {
	if (index >= 0 && index < 4)
		return (this->_inventory[index]);
	return (NULL);
}

AMateria	*Character::getGarbage( const int index ) const {
	if (index >= 0 && index < 4)
		return (this->_garbage[index]);
	return (NULL);
}

/* Setters */

void	Character::setName( const std::string &name ) {
	this->_name = name;
}

void	Character::setGarbage( AMateria *materia, const int index ) {
	this->_garbage[index] = materia;
}

void	Character::setInventory( AMateria *materia, const int index ) {
	this->_inventory[index] = materia;
}

/* Methods */

void	Character::unequip( int idx ) {
	if ((idx < 0 || idx > 4) || this->getInventory(idx) == NULL) {
		std::cout << "Unequip: " << RED << "Cannot unequip materia" << DEFAULT
				  << std::endl;
		return ;
	}
	this->addToGarbage(this->getInventory(idx));
	this->setInventory(NULL, idx);
	std::cout << "Unequip: " << GREEN << "Materia was unequiped" << DEFAULT
			  << std::endl;
}

void	Character::equip( AMateria *m ) {
	if (!m)
		return ;
	for (int i = 0; i < 4; i++) {
		if (this->getInventory(i) == NULL) {
			this->setInventory(m, i);
			std::cout << "Equip: " << GREEN << "Materia equiped" << DEFAULT
					<< std::endl;
			return ;
		}
	}
	std::cout << "Equip: " << RED << "Inventory is full" << DEFAULT
			<< std::endl;
	delete m;
}

void	Character::removeGarbage( void ) {
	for (int i = 0; i < 4; i++) {
        if (this->getGarbage(i))
            delete this->getGarbage(i);
    }
}

bool	Character::garbageIsFull( void ) {
	for (int i = 0; i < 4; i++) {
        if (this->getGarbage(i) == NULL)
            return (false);
    }
	return (true);
}

void	Character::removeInventory( void ) {
	for (int i = 0; i < 4; i++) {
        if (this->getInventory(i))
            delete this->getInventory(i);
    }
}

void	Character::addToGarbage( AMateria *materia ) {
	if (!materia)
		return;
	if (this->garbageIsFull()) {
		std::cout << YELLOW << "AddToGarbage: " << DEFAULT << "Garbage is full, " \
			<< "we are going to remove the oldest materia" << std::endl;
		delete this->getGarbage(0);
		for (int i = 0; i < 3; i++) {
			this->setGarbage(this->getGarbage(i + 1), i);
		}
		this->setGarbage(materia, 3);
	} else {
		for (int i = 0; i < 4; i++) {
			if (this->getGarbage(i) == NULL) {
				this->setGarbage(materia, i);
				return ;
			}
		}
	}
}

void	Character::use( int idx, ICharacter &target ) {
	if ((idx < 0 || idx > 4) || this->getInventory(idx) == NULL) {
		std::cout << "Use: " << RED << "cannot exec use" << DEFAULT \
			<< std::endl;
		return ;
	}
	this->getInventory(idx)->use(target);
}