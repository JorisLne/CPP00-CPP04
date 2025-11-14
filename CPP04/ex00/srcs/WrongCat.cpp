/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 12:41:39 by jlaine            #+#    #+#             */
/*   Updated: 2025/06/09 12:45:53 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat(void)
{
	_type = "WrongCat";
	std::cout << GREEN << "[WrongCat] default constructor called" << RESET << std::endl;
}


WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
	std::cout << GREEN << "[WrongCat] copy constructor called" << RESET << std::endl;
}


WrongCat	&WrongCat::operator=(const WrongCat &other)
{
	std::cout << YELLOW << "[WrongCat] assignment operator called" << RESET << std::endl;
	
	if (this != &other)
		this->_type = other._type;

	return (*this);
}


WrongCat::~WrongCat(void)
{
	std::cout << RED << "[WrongCat] destructor called" << RESET << std::endl;
}


void	WrongCat::makeSound(void) const
{
	std::cout << YELLOW << "Miaou (Wrong) 🐱❌" << RESET << std::endl;
}
