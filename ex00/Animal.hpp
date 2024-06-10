/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgosselk <lgosselk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 15:32:25 by lgosselk          #+#    #+#             */
/*   Updated: 2024/04/05 10:40:46 by lgosselk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>

class Animal {
	private:
	protected:
		std::string _type;
	public:
		Animal( void );
		virtual ~Animal( void );
		Animal( const Animal &copy );
		Animal( const std::string type );
		std::string		getType( void ) const;
		virtual void    makeSound( void ) const;
		Animal  		&operator=( const Animal &copy );
		void			setType( const std::string type );
};

#endif