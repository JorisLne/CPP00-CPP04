/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 12:41:37 by jlaine            #+#    #+#             */
/*   Updated: 2025/06/03 16:32:49 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("WrongAnimal")
{
	std::cout << GREEN << "WrongAnimal constructor called" << RESET << std::endl;
}


WrongAnimal::WrongAnimal(const WrongAnimal &other) : _type(other._type)
{
	std::cout << GREEN << "WrongAnimal copy constructor called" << RESET << std::endl;
}


WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << YELLOW << "WrongAnimal assignment operator called" << RESET << std::endl;

	if (this != &other)
		this->_type = other._type;
	
	return (*this);
}


WrongAnimal::~WrongAnimal(void)
{
	std::cout << RED << "WrongAnimal destructor called" << RESET << std::endl;
}


void	WrongAnimal::makeSound(void) const
{
	std::cout << YELLOW << "* Wrong animal sound *" << RESET << std::endl;
}


std::string	WrongAnimal::getType(void) const
{
	std::cout << YELLOW << "[WrongAnimal] getType() appelé" << RESET << std::endl;
	return (_type);
}
