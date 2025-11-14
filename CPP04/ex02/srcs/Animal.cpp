/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 12:40:54 by jlaine            #+#    #+#             */
/*   Updated: 2025/06/04 16:25:08 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal() : _type("Animal")
{
	std::cout << GREEN << "[Animal] default constructor called" << RESET << std::endl;
}


Animal::Animal(const Animal &other) : _type(other._type)
{
	std::cout << GREEN << "[Animal] copy constructor called" << RESET << std::endl;
}


Animal	&Animal::operator=(const Animal &other)
{
	std::cout << YELLOW << "[Animal] assignment operator called" << RESET << std::endl;

	if (this != &other)
		this->_type = other._type;
	
	return (*this);
}


Animal::~Animal(void)
{
	std::cout << RED << "[Animal] destructor called" << RESET << std::endl;
}


std::string	Animal::getType(void) const
{
	std::cout << YELLOW << "[Animal] getType() appelé" << RESET << std::endl;
	return (_type);
}
