/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 00:16:15 by jorislaine        #+#    #+#             */
/*   Updated: 2025/05/26 13:01:27 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

void testComparison()
{
	std::cout << "--- Test Comparison ---\n";
	std::cout << std::boolalpha;

	Fixed a(10);
	Fixed b(20);
	Fixed c(10);

	std::cout << "a = " << a << ", b = " << b << ", c = " << c << "\n";
	std::cout << "a < b : " << (a < b) << "\n";
	std::cout << "a > b : " << (a > b) << "\n";
	std::cout << "a <= c : " << (a <= c) << "\n";
	std::cout << "a >= c : " << (a >= c) << "\n";
	std::cout << "a == c : " << (a == c) << "\n";
	std::cout << "a != b : " << (a != b) << "\n" << "\n";

	std::cout << std::noboolalpha;
}


void testArithmetic()
{
	std::cout << "\n--- Test Arithmetic ---\n";

	Fixed a(10);		// 10.0
	Fixed b(2.5f);		// 2.5
	Fixed c(-3);		// -3.0

	std::cout << "a = " << a << ", b = " << b << ", c = " << c << "\n";

	std::cout << "a + b = " << (a + b) << "\n";  // 12.5
	std::cout << "a - b = " << (a - b) << "\n";  // 7.5
	std::cout << "a * b = " << (a * b) << "\n";  // 25
	std::cout << "a / b = " << (a / b) << "\n";  // 4

	std::cout << "b + c = " << (b + c) << "\n";  // -0.5
	std::cout << "b * c = " << (b * c) << "\n";  // -7.5
}


void testIncrement()
{
	std::cout << "\n--- Test Increment / Decrement ---\n";

	Fixed a;
	std::cout << "Initial a = " << a << "\n";

	std::cout << "++a = " << ++a << " (pré-incrémentation)\n";
	std::cout << "a = " << a << " (après pré-incrémentation)\n";

	std::cout << "a++ = " << a++ << " (post-incrémentation)\n";
	std::cout << "a = " << a << " (après post-incrémentation)\n";

	std::cout << "--a = " << --a << " (pré-décrémentation)\n";
	std::cout << "a = " << a << " (après pré-décrémentation)\n";

	std::cout << "a-- = " << a-- << " (post-décrémentation)\n";
	std::cout << "a = " << a << " (après post-décrémentation)\n";

	// 1 ÷ 256 = 0.00390625 (int to float)
	// 0.00390625 × 256 = 1 (float to int)
}


void testMaxMin()
{
	std::cout << "\n--- Test min / max ---\n";

	Fixed a(10.5f);
	Fixed b(20.25f);
	Fixed c(10.5f);

	std::cout << "a = " << a << ", b = " << b << ", c = " << c << "\n";

	// Non const
	std::cout << "min(a, b) = " << Fixed::min(a, b) << "\n";
	std::cout << "max(a, b) = " << Fixed::max(a, b) << "\n";
	std::cout << "min(a, c) = " << Fixed::min(a, c) << "\n";  // égalité

	// Const
	const Fixed x(42.42f);
	const Fixed y(3.14f);

	std::cout << "x = " << x << ", y = " << y << "\n";
	std::cout << "min(x, y) = " << Fixed::min(x, y) << "\n";
	std::cout << "max(x, y) = " << Fixed::max(x, y) << "\n";
}


void testSubject()
{
	std::cout << "\n--- Test sujet ---\n";

	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;
}


int main(void)
{
	testComparison();
	testArithmetic();
	testIncrement();
	testMaxMin();
	testSubject();
	return (0);
}
