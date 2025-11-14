/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 12:41:43 by jlaine            #+#    #+#             */
/*   Updated: 2025/06/09 13:51:13 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog(void)
{
	_type = "Dog";
	std::cout << GREEN << "[Dog] default constructor called" << RESET << std::endl;
}


Dog::Dog(const Dog &other) : Animal(other)
{
		std::cout << GREEN << "[Dog] copy constructor called" << RESET << std::endl;
}


Dog	&Dog::operator=(const Dog &other)
{
	std::cout << YELLOW << "[Dog] assignment operator called" << RESET << std::endl;

	if (this != &other)
		this->_type = other._type;

	return (*this);
}


Dog::~Dog(void)
{
	std::cout << RED << "[Dog] destructor called" << RESET << std::endl;
}


void	Dog::makeSound(void) const
{
	std::cout << YELLOW << "Woof! 🐶" << RESET << std::endl;
}
