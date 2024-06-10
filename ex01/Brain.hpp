/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgosselk <lgosselk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 12:47:08 by lgosselk          #+#    #+#             */
/*   Updated: 2024/04/15 09:49:18 by lgosselk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>

class Brain {
	private:
		std::string	_ideas[100];
		static const int  _nb_ideas = 100;
	public:
		Brain( void );
		~Brain( void );
		Brain( const Brain &copy );
		Brain				&operator=( const Brain &copy );
		std::string			getIdea( const int &index ) const;
		void				setIdea( const std::string &idea, const int &index );
};

#endif