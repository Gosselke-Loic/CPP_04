/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgosselk <lgosselk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 11:06:58 by lgosselk          #+#    #+#             */
/*   Updated: 2024/04/05 11:11:47 by lgosselk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

#include <iostream>

class WrongAnimal {
	private:
	protected:
		std::string _type;
	public:
		WrongAnimal( void );
		~WrongAnimal( void );
		void	makeSound( void ) const;
		std::string	getType( void ) const;
		WrongAnimal( const std::string type );
		WrongAnimal( const WrongAnimal &copy );
		void		setType( const std::string type );
		WrongAnimal	&operator=( const WrongAnimal &copy );

};

#endif