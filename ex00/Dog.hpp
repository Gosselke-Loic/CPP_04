/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgosselk <lgosselk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 10:46:37 by lgosselk          #+#    #+#             */
/*   Updated: 2024/04/05 10:10:38 by lgosselk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

#include "Animal.hpp"

class Dog: public Animal {
	private:
	public:
		Dog( void );
		~Dog( void );
		Dog( const Dog &copy );
		Dog( const std::string type );
		void	makeSound( void ) const;
		Dog		&operator=( const Dog &copy );
};

#endif