/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 13:03:37 by jlaine            #+#    #+#             */
/*   Updated: 2025/05/26 16:25:56 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

// constructeurs - destructeurs

Fixed::Fixed(void) : _value(0) // par defaut
{
	return ;
}

Fixed::Fixed(const Fixed &other) // constructeur de recopie
{
	*this = other;
}

Fixed::Fixed(const int i) // int constructeur
{
	this->_value = i << _fractionalBits;
}

Fixed::Fixed(const float f) // float constructeur
{
	this->_value = roundf(f * (1 << _fractionalBits));
}

Fixed::~Fixed(void) // par defaut
{
	return ;
}



// accesseurs

int	Fixed::getRawBits(void) const
{
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}



// conversion

int	Fixed::toInt(void) const 
{
	return (this->_value >> _fractionalBits);
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(this->_value) / (1 << _fractionalBits));
}



// comparaison

std::ostream	&operator<<(std::ostream &os, const Fixed &f)
{
    os << f.toFloat();
    return (os);
}

Fixed &Fixed::operator=(const Fixed &other)
{
	if (this != &other)
		this->_value = other.getRawBits();
	return (*this);		
}

bool	Fixed::operator>(const Fixed &other) const 
{
	return (this->_value > other._value);
}

bool	Fixed::operator<(const Fixed &other) const 
{
	return (this->_value < other._value);
}

bool	Fixed::operator>=(const Fixed &other) const 
{
	return (this->_value >= other._value);
}

bool	Fixed::operator<=(const Fixed &other) const 
{
	return (this->_value <= other._value);
}

bool	Fixed::operator==(const Fixed &other) const 
{
	return (this->_value == other._value);
}

bool	Fixed::operator!=(const Fixed &other) const 
{
	return (this->_value != other._value);
}



// artihmetique

Fixed	Fixed::operator+(const Fixed &other) const 
{
	return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &other) const 
{
	return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &other) const 
{
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed Fixed::operator/(const Fixed &other) const 
{
	return (Fixed(this->toFloat() / other.toFloat()));
}



// incrementation - decrementation

Fixed	&Fixed::operator++(void) 
{
	this->_value++;
	return (*this);
}

Fixed	Fixed::operator++(int) 
{
	Fixed	temp = *this;
	this->_value++;
	return (temp);
}

Fixed	&Fixed::operator--(void) 
{
	this->_value--;
	return (*this);
}

Fixed	Fixed::operator--(int) 
{
	Fixed	temp = *this;
	this->_value--;
	return (temp);
}



// min - max statiques surchargees

Fixed		&Fixed::min(Fixed &a, Fixed &b) 
{
	if (a < b)
		return (a);
	else
		return (b);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b) 
{
	if (a < b)
		return (a);
	else
		return (b);
}

Fixed		&Fixed::max(Fixed &a, Fixed &b) 
{
	if (a > b)
		return (a);
	else
		return (b);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b) 
{
	if (a > b)
		return (a);
	else
		return (b);
}
