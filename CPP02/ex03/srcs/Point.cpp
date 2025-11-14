/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 13:03:42 by jlaine            #+#    #+#             */
/*   Updated: 2025/05/26 15:18:53 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Point.hpp"

Point::Point(void) : _x(0), _y(0)
{
	return ;
}

Point::Point(const float x, const float y) : _x(x), _y(y)
{
	return ;
}

Point::Point(const Point &other) : _x(other._x), _y(other._y)
{
	return ;
}

Point::~Point()
{
	return ;
}

Point	&Point::operator=(const Point &other)
{
	(void)other;
	return (*this);
}

Fixed	Point::GetX(void) const
{
	return (this->_x);
}

Fixed	Point::GetY(void) const
{
	return (this->_y);
}
