/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgosselk <lgosselk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 12:47:02 by lgosselk          #+#    #+#             */
/*   Updated: 2024/04/15 09:52:49 by lgosselk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/* Constructors/Destructor */

Brain::Brain( void ) {
	std::cout << "Default constructor of Brain called" << std::endl;
}

Brain::~Brain( void ) {
	std::cout << "Brain is dead" << std::endl;
}

Brain::Brain( const Brain &copy ) {
	*this = copy;
	std::cout << "Memory of another brain is copied" << std::endl;
}

/* Operators */

Brain   &Brain::operator=( const Brain &copy ) {
	if (this != &copy) {
		for (int i = 0; i < this->_nb_ideas; i++) {
			if (!copy.getIdea(i).empty())
				this->setIdea(copy.getIdea(i), i);
		}
	}
	return (*this);
}

/* Getters */

std::string Brain::getIdea( const int &index ) const {
	if (index >= 0 && index < 100)
		return (this->_ideas[index]);
	return (NULL);
}

/* Setters */

void	Brain::setIdea( const std::string &idea, const int &index ) {
	if (index >= 0 && index < 100)
		this->_ideas[index] = idea;
}