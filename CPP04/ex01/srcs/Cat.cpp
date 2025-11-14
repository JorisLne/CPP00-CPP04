/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 12:41:45 by jlaine            #+#    #+#             */
/*   Updated: 2025/06/09 12:25:32 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat(void)
{
	_type = "Cat";
	_brain = new Brain();
	std::cout << GREEN << "Cat default constructor called" << RESET << std::endl;
}


Cat::Cat(const Cat &other)
{
	(void)other;
	_brain = new Brain(*other._brain);
	std::cout << GREEN << "Cat copy constructor called" << RESET << std::endl;
}


Cat	&Cat::operator=(const Cat &other)
{
	std::cout << YELLOW << "Cat assignment operator called" << RESET << std::endl;

	if (this != &other)
	{
		Animal::operator=(other);
		delete (_brain);
		_brain = new Brain(*other._brain);
	}

	return (*this);
}


Cat::~Cat(void)
{
	delete (_brain);
	std::cout << RED << "Cat destructor called" << RESET << std::endl;
}


void	Cat::makeSound(void) const
{
	std::cout << YELLOW << "Meow! 🐱" << RESET << std::endl;
}


void Cat::setCatIdea(int i, const std::string &idea) 
{
	if (_brain)
		_brain->setIdea(i, idea);
}

std::string Cat::getCatIdea(int i) const 
{
	if (_brain)
		return (_brain->getIdea(i));
	return ("");
}
