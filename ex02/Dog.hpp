/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgosselk <lgosselk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 10:46:37 by lgosselk          #+#    #+#             */
/*   Updated: 2024/04/12 16:21:35 by lgosselk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

#include "Animal.hpp"

class Dog: public Animal {
	private:
        Brain   *_brain;
	public:
		Dog( void );
		~Dog( void );
		Dog( const Dog &copy );
		Dog( const std::string type );
		void				makeSound( void ) const;
		Brain				*getBrain( void ) const;
		Dog					&operator=( const Dog &copy );
		void				setBrain( const Brain *brain );
		std::string			getIdea( const int &index ) const;
		void				setIdea( const std::string &idea, const int &index );
};

#endif