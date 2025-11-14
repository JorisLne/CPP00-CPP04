/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 14:57:17 by jlaine            #+#    #+#             */
/*   Updated: 2025/05/26 12:52:14 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

Fixed::Fixed(void) : _value(0) // constructeur par defaut
{
	std::cout << "Default constructor called" << std::endl;
}


Fixed::Fixed(const Fixed &other) // constructeur de recopie
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}


Fixed &Fixed::operator=(const Fixed &other) // operateur d'affectation
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_value = other.getRawBits();
	return (*this);		
}


Fixed::Fixed(const int i) // int constructeur
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = i << _fractionalBits;
}


Fixed::Fixed(const float f) // float constructeur
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(f * (1 << _fractionalBits));
}


Fixed::~Fixed(void) // destructeur
{
	std::cout << "Destructor called" << std::endl;
}


int	Fixed::getRawBits(void) const
{
	return (this->_value);
}


void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}


std::ostream	&operator<<(std::ostream &os, const Fixed &f) // surcharge operateur<<
{
    os << f.toFloat();
    return (os);
}


int	Fixed::toInt(void) const 
{
	return (this->_value >> _fractionalBits);
}


float	Fixed::toFloat(void) const
{
	return (static_cast<float>(this->_value) / (1 << _fractionalBits));
}

// fixed-point encoding (8 bits fraction):
// float → int  :  value × 256
// int → float  :  value ÷ 256