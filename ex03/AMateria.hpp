/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgosselk <lgosselk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 10:46:03 by lgosselk          #+#    #+#             */
/*   Updated: 2024/04/11 13:51:42 by lgosselk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria {
	protected:
		std::string	_type;
	public:
		AMateria( void );
		virtual ~AMateria( void );
		AMateria( const AMateria &copy );
		AMateria( std::string const &type );
		AMateria	&operator=( const AMateria &copy );

		std::string const	&getType() const;
		virtual AMateria	*clone() const = 0;
		virtual void		use( ICharacter &target );
		void				setType( const std::string &type );
};

#endif