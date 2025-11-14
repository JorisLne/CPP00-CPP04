/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 11:29:28 by jlaine            #+#    #+#             */
/*   Updated: 2025/06/06 14:58:46 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	return ;
}


Cure::Cure(const Cure &other) : AMateria(other)
{
	return ;
}


Cure	&Cure::operator=(const Cure &other)
{
	if (this != &other)
		AMateria::operator=(other);
	
	return (*this);
}


Cure::~Cure(void)
{
	return ;
}


Cure	*Cure::clone(void) const
{
	return new Cure();
}


void	Cure::use(ICharacter &target)
{
	std::cout << GREEN << "* heals " << target.getName() << "'s wounds *" << RESET << std::endl;
}