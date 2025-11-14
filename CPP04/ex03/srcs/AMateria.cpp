/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 11:28:50 by jlaine            #+#    #+#             */
/*   Updated: 2025/06/05 14:32:42 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"

AMateria::AMateria(void) : _type("default")
{
	return ;
}


AMateria::AMateria(const std::string &type) : _type(type)
{
	return ;
}


AMateria::AMateria(const AMateria &other) : _type(other._type)
{
	return ;
}


AMateria &AMateria::operator=(const AMateria &other)
{
	if (this != &other)
		_type = other._type;
	
	return (*this);
}


AMateria::~AMateria(void)
{
	return ;
}


const std::string	&AMateria::getType(void) const
{
	return (_type);
}


void	AMateria::use(ICharacter &target)
{
	(void)target;
}

