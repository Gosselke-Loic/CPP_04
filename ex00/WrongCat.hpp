/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgosselk <lgosselk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 11:06:15 by lgosselk          #+#    #+#             */
/*   Updated: 2024/04/05 11:20:08 by lgosselk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
# define WRONGCAT_H

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {
    private:
    public:
        WrongCat( void );
        ~WrongCat( void );
		void	makeSound( void ) const;
        WrongCat( const WrongCat &copy );
        WrongCat( const std::string type );
        WrongCat	&operator=( const WrongCat &copy );
};

#endif