/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgosselk <lgosselk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 10:53:59 by lgosselk          #+#    #+#             */
/*   Updated: 2024/04/10 11:32:15 by lgosselk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria {
    public:
		Cure( void );
		~Cure( void );
		Cure( const Cure &copy );
		Cure	&operator=( const Cure &copy );

		virtual AMateria	*clone( void ) const;
		void				use( ICharacter &target );
};

#endif