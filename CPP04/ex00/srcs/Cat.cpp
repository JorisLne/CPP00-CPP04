/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 12:41:45 by jlaine            #+#    #+#             */
/*   Updated: 2025/06/09 13:51:19 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat(void)
{
	_type = "Cat";
	std::cout << GREEN << "[Cat] default constructor called" << RESET << std::endl;
}


Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << GREEN << "[Cat] copy constructor called" << RESET << std::endl;
}


Cat	&Cat::operator=(const Cat &other)
{
	std::cout << YELLOW << "[Cat] assignment operator called" << RESET << std::endl;

	if (this != &other)
		this->_type = other._type;

	return (*this);
}


Cat::~Cat(void)
{
	std::cout << RED << "[Cat] destructor called" << RESET << std::endl;
}


void	Cat::makeSound(void) const
{
	std::cout << YELLOW << "Meow! 🐱" << RESET << std::endl;
}
