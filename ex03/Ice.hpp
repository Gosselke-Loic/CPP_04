/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgosselk <lgosselk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 10:54:36 by lgosselk          #+#    #+#             */
/*   Updated: 2024/04/10 11:31:44 by lgosselk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria {
        public:
		Ice( void );
		~Ice( void );
		Ice( const Ice &copy );
		Ice	&operator=( const Ice &copy );

		virtual AMateria	*clone( void ) const;
		void				use( ICharacter &target );
};

#endif