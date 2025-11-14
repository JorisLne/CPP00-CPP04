/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 12:39:05 by jlaine            #+#    #+#             */
/*   Updated: 2025/06/04 13:41:14 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Brain.hpp"
#include "Animal.hpp"

class	Dog : public Animal
{
	private:
		Brain*	_brain;

	public:
		Dog(void);
		Dog(const Dog &other);
		Dog	&operator=(const Dog &other);
		~Dog(void);
	
		void	makeSound(void) const;

		std::string getDogIdea(int i) const;
		void 		setDogIdea(int i, const std::string &idea);
};

#endif