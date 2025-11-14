/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 13:03:46 by jlaine            #+#    #+#             */
/*   Updated: 2025/05/26 14:11:58 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
#define FIXED_HPP

#include <cmath>
#include <iostream>

class	Fixed
{
	private:
		int					_value;
		static const int	_fractionalBits = 8;
		
	public:
		// constructeur - destructeur
		Fixed();
		Fixed(const int i);
		Fixed(const float f);
		Fixed(const Fixed &other);
		~Fixed();
		Fixed &operator=(const Fixed &other);

		// comparaison
		bool	operator>(const Fixed &other) const;
		bool	operator<(const Fixed &other) const;
		bool	operator>=(const Fixed &other) const;
		bool	operator<=(const Fixed &other) const;
		bool	operator==(const Fixed &other) const;
		bool	operator!=(const Fixed &other) const;

		// arithmetique
		Fixed	operator+(const Fixed &other) const;
		Fixed	operator-(const Fixed &other) const;
		Fixed	operator*(const Fixed &other) const;
		Fixed	operator/(const Fixed &other) const;

		// incrementation - decrementation
		Fixed&	operator++(void); // pre increment
		Fixed	operator++(int); // post increment
		Fixed&	operator--(void); // pre decrement
		Fixed	operator--(int); // post decrement

		// accesseurs
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		// conversion
		int		toInt(void) const;
		float	toFloat(void) const;

		// min-max statiques surchargees
		static Fixed		&min(Fixed& a, Fixed& b);
		static const Fixed	&min(const Fixed& a, const Fixed& b);
		static Fixed		&max(Fixed& a, Fixed& b);
		static const Fixed	&max(const Fixed& a, const Fixed& b);
};

std::ostream	&operator<<(std::ostream &os, const Fixed &f);

#endif