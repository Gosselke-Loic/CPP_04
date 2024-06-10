/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgosselk <lgosselk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:58:38 by lgosselk          #+#    #+#             */
/*   Updated: 2024/04/11 15:55:37 by lgosselk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

# define RED "\033[1;31m"
# define DEFAULT "\033[0m"
# define GREEN "\033[1;32m"
# define YELLOW "\033[1;33m"

class MateriaSource: public IMateriaSource {
	private:
		AMateria	*_aMaterias[4];
	public:
		MateriaSource( void );
		~MateriaSource( void );
		MateriaSource( const MateriaSource &copy );
		MateriaSource	&operator=( const MateriaSource &copy );
		
		AMateria	*getMateria( const int index ) const;
		void		setMateria( AMateria *materia, const int index );

		void		removeMaterias( void );
		void		learnMateria( AMateria * );
		bool		inInventory( AMateria *materia );
		AMateria	*createMateria( std::string const &type );
};

#endif