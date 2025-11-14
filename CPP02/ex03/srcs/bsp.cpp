/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 13:03:35 by jlaine            #+#    #+#             */
/*   Updated: 2025/05/26 16:35:02 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Point.hpp"

// With : A(x1, y1) , B(x2, y2), C(x3, y3)
// Area = | x1(y2 − y3) + x2(y3 − y1) + x3(y1 − y2) | / 2
static Fixed	absoluteArea(Point const &A, Point const &B, Point const &C)
{
	Fixed	result = 
	(
		(A.GetX() * (B.GetY() - C.GetY())) +
		(B.GetX() * (C.GetY() - A.GetY())) +
		(C.GetX() * (A.GetY() - B.GetY()))
	) / Fixed(2);

	if (result < Fixed(0))
		result = result * Fixed(-1);
	
	return (result);
}


bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	areaABC = absoluteArea(a, b, c);
	Fixed	areaABP = absoluteArea(a, b, point);
	Fixed	areaBCP = absoluteArea(b, c, point);
	Fixed	areaCAP = absoluteArea(c, a, point);

	if (areaABC == Fixed(0) || areaABP == Fixed(0) || areaBCP == Fixed(0) || areaCAP == Fixed(0))
		return (false);
	if (areaABC == (areaABP + areaBCP + areaCAP))
		return (true);
	
	return (false);
}
