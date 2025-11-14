/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 12:39:08 by jlaine            #+#    #+#             */
/*   Updated: 2025/06/04 13:41:21 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Brain.hpp"
#include "Animal.hpp"

class	Cat : public Animal
{
	private:
		Brain*	_brain;

	public:
		Cat(void);
		Cat(const Cat &other);
		Cat	&operator=(const Cat &other);
		~Cat(void);
	
		void	makeSound(void) const;

		std::string getCatIdea(int i) const;
		void 		setCatIdea(int i, const std::string &idea);
};

#endif