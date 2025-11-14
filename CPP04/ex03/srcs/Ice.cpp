/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 11:29:03 by jlaine            #+#    #+#             */
/*   Updated: 2025/06/06 15:54:40 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	return ;
}


Ice::Ice(const Ice &other) : AMateria(other)
{
	return ;
}


Ice	&Ice::operator=(const Ice &other)
{
	if (this != &other)
		AMateria::operator=(other);
	
	return (*this);
}


Ice::~Ice(void)
{
	return ;
}


Ice	*Ice::clone(void) const
{
	return new Ice();
}

void	Ice::use(ICharacter &target)
{
	std::cout << BLUE << "* shoots an ice bolt at " << target.getName() << " *" << RESET << std::endl;
}
