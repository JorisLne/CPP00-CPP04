/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 12:41:43 by jlaine            #+#    #+#             */
/*   Updated: 2025/06/04 13:41:06 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog(void)
{
	_type = "Dog";
	_brain = new Brain();
	std::cout << GREEN << "Dog default constructor called" << RESET << std::endl;
}


Dog::Dog(const Dog &other)
{
	(void)other;
	_brain = new Brain(*other._brain);
	std::cout << GREEN << "Dog copy constructor called" << RESET << std::endl;
}


Dog	&Dog::operator=(const Dog &other)
{
	std::cout << YELLOW << "Dog assignment operator called" << RESET << std::endl;

	if (this != &other)
	{
		Animal::operator=(other);
		delete (_brain);
		_brain = new Brain(*other._brain);
	}

	return (*this);
}


Dog::~Dog(void)
{
	delete (_brain);
	std::cout << RED << "Dog destructor called" << RESET << std::endl;
}


void	Dog::makeSound(void) const
{
	std::cout << YELLOW << "Woof! 🐶" << RESET << std::endl;
}


void Dog::setDogIdea(int i, const std::string &idea) 
{
	if (_brain)
		_brain->setIdea(i, idea);
}

std::string Dog::getDogIdea(int i) const 
{
	if (_brain)
		return (_brain->getIdea(i));
	return ("");
}
