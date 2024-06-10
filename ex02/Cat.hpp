/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgosselk <lgosselk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 10:46:21 by lgosselk          #+#    #+#             */
/*   Updated: 2024/04/12 16:20:50 by lgosselk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include "Animal.hpp"

class Cat: public Animal {
    private:
        Brain   *_brain;
    public:
        Cat( void );
        ~Cat( void );
        Cat( const Cat &copy );
        Cat( const std::string type );
        void				makeSound( void ) const;
        Brain				*getBrain( void ) const;
		Cat					&operator=( const Cat &copy );
		void				setBrain( const Brain *brain );
		std::string			getIdea( const int &index ) const;
		void				setIdea( const std::string &idea, const int &index );
};

#endif