/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 13:04:19 by jlaine            #+#    #+#             */
/*   Updated: 2025/05/27 19:08:17 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("Default_Frag")
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
}


FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap named constructor called" << std::endl;
}


FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	*this = other;
	std::cout << "FragTrap copy constructor called" << std::endl;
}


FragTrap	&FragTrap::operator=(const FragTrap &other)
{
	std::cout << "FragTrap assignment operator (=) called" << std::endl;
	if (this != &other)
		ClapTrap::operator=(other);
	return *this;
}


FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Destructor called" << std::endl;
}


void	FragTrap::attack(const std::string &target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << "⚔️ FragTrap " << _name << " attacks " << target
				  << " causing " << _attackDamage << " points of damage ⚔️" << std::endl;
		_energyPoints--;
	}
	else
		std::cout << "❌ FragTrap " << _name << " can't attack (no energy or is dead) ❌" << std::endl;
}


void	FragTrap::highFivesGuys(void)
{
	std::cout << "✋ FragTrap " << _name << " requests a high five ✋!" << std::endl;
}