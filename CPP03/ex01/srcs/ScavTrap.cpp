/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 13:04:41 by jlaine            #+#    #+#             */
/*   Updated: 2025/05/27 18:21:24 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	_name = "Default_Scav";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
}


ScavTrap::ScavTrap(const std::string &name)
{
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap named constructor called" << std::endl;
}


ScavTrap::ScavTrap(const ScavTrap &other)
{
	*this = other;
	std::cout << "ScavTrap copy constructor called" << std::endl;
}


ScavTrap	&ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "ScavTrap Assignment operator (=) called" << std::endl;
	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	return (*this);
}


ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}



void	ScavTrap::attack(const std::string &target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << "⚔️ ScavTrap " << _name << " attacks " << target
				  << " causing " << _attackDamage << " points of damage ⚔️" << std::endl;
		_energyPoints--;
	}
	else
		std::cout << "❌ ScavTrap " << _name << " can't attack (no energy or is dead) ❌" << std::endl;
}


void	ScavTrap::guardGate(void)
{
	std::cout << "⛩️ ScavTrap has entered Gate keeper mode ⛩️" << std::endl;
}
