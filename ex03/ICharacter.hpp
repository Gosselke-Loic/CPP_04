/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgosselk <lgosselk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 10:50:10 by lgosselk          #+#    #+#             */
/*   Updated: 2024/04/11 13:50:38 by lgosselk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include "AMateria.hpp"

class AMateria;

class ICharacter {
    public:
		virtual ~ICharacter( void ) {}

		virtual std::string const	&getName() const = 0;
		virtual void				unequip( int idx ) = 0;
		virtual void				equip( AMateria *m ) = 0;
		virtual void				use( int idx, ICharacter &target ) = 0;
};

#endif