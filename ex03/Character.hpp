/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgosselk <lgosselk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 10:57:51 by lgosselk          #+#    #+#             */
/*   Updated: 2024/04/11 15:46:00 by lgosselk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

# define RED "\033[1;31m"
# define DEFAULT "\033[0m"
# define GREEN "\033[1;32m"
# define YELLOW "\033[1;33m"

class Character: public ICharacter {
    private:
		std::string	_name;
		AMateria	*_garbage[4];
		AMateria	*_inventory[4];
	public:
		Character( void );
		~Character( void );
		Character( const Character &copy );
		Character( const std::string name );
		Character	&operator=( const Character &copy );
	
		/* Setters/Setters */
		std::string const	&getName( void ) const;
		void				setName( const std::string &name );
		AMateria			*getGarbage( const int index ) const;
		AMateria			*getInventory( const int index ) const;
		void				setGarbage( AMateria *materia, const int index );
		void				setInventory( AMateria *materia, const int index );
		/* Inherited methods  */
		void				unequip( int idx );
		void				equip( AMateria *m );
		bool				garbageIsFull( void );
		void				removeGarbage( void );
		void				removeInventory( void );
		void				addToGarbage( AMateria *materia );
		void				use( int idx, ICharacter &target );
};

#endif