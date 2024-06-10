/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgosselk <lgosselk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 10:46:21 by lgosselk          #+#    #+#             */
/*   Updated: 2024/04/05 10:25:16 by lgosselk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include "Animal.hpp"

class Cat: public Animal {
    private:
    public:
        Cat( void );
        ~Cat( void );
        Cat( const Cat &copy );
        Cat( const std::string type );
        void	makeSound( void ) const;
        Cat     &operator=( const Cat &copy );
};

#endif