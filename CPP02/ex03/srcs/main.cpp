/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 13:03:40 by jlaine            #+#    #+#             */
/*   Updated: 2025/05/26 16:43:05 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Point.hpp"

#include <vector>
#include <string>

void displayGrid(const Point& a, const Point& b, const Point& c, const Point& test)
{
	const int size = 21;
	std::vector<std::string> grid(size, std::string(size, '.'));

	for (int y = size - 1; y >= 0; --y)
	{
		for (int x = 0; x < size; ++x)
		{
			Point p((float)x, (float)y);

			if ((int)a.GetX().toFloat() == x && (int)a.GetY().toFloat() == y)
				grid[y][x] = 'S';
			else if ((int)b.GetX().toFloat() == x && (int)b.GetY().toFloat() == y)
				grid[y][x] = 'S';
			else if ((int)c.GetX().toFloat() == x && (int)c.GetY().toFloat() == y)
				grid[y][x] = 'S';
			else if ((int)test.GetX().toFloat() == x && (int)test.GetY().toFloat() == y)
				grid[y][x] = 'P';
			else if (bsp(a, b, c, p))
				grid[y][x] = 'x';
		}
	}

	std::cout << "\nGrille ASCII (haut = y=20, droite = x=20):\n" << std::endl;
	for (int y = size - 1; y >= 0; --y)
	{
		std::cout << y << "\t";
		for (int x = 0; x < size; ++x)
			std::cout << grid[y][x];
		std::cout << std::endl;
	}
	std::cout << "\n\t";
	for (int x = 0; x < size; ++x)
		std::cout << (x % 10);
	std::cout << "  ← x" << std::endl;
}


void test(Point const& a, Point const& b, Point const& c, Point const& p)
{
	std::cout << "Test with P(" << p.GetX() << ", " << p.GetY() << ") : ";
	if (bsp(a, b, c, p))
		std::cout << "✅ is inside" << std::endl;
	else
		std::cout << "❌ is outside (or on an edge)" << std::endl;
	
	displayGrid(a, b, c, p);
}

int main(void)
{
	Point a(0, 0);
	Point b(10, 0);
	Point c(5, 10);

	std::cout << "--- Triangle : A(0,0), B(10,0), C(5,10) ---\n" << std::endl;

	// inside
	Point inside(5, 5);
	test(a, b, c, inside);

	// outside
	Point outside(10, 10);
	test(a, b, c, outside);

	// on an edge (AB)
	Point onEdgeAB(5, 0);
	test(a, b, c, onEdgeAB);

	// on an edge (BC)
	Point onEdgeBC(7.5f, 5);
	test(a, b, c, onEdgeBC);

	// on a summit
	Point onSummitA(0, 0);
	test(a, b, c, onSummitA);

	return (0);
}
