/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 13:03:48 by jlaine            #+#    #+#             */
/*   Updated: 2025/05/26 16:34:21 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class	Point
{
	private:
		Fixed	_x;
		Fixed	_y;
	
	public:
		Point(void);
		Point(const float x, const float y);
		Point(const Point &other);
		~Point(void);
	
		Point &operator=(const Point &other);

		Fixed	GetX(void) const;
		Fixed	GetY(void) const;
};

bool			bsp(Point const a, Point const b, Point const c, Point const point);

#endif