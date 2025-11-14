/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 13:04:22 by jlaine            #+#    #+#             */
/*   Updated: 2025/05/27 18:49:16 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
}


ClapTrap::ClapTrap(const std::string &name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap Named constructor called" << std::endl;
}


ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = other;
}


ClapTrap	&ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "ClapTrap Assignment operator (=) called" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return (*this);
}


ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}


void	ClapTrap::attack(const std::string &target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << "⚔️ ClapTrap " << _name << " attacks " << target
				  << " causing " << _attackDamage << " points of damage ⚔️" << std::endl;
		_energyPoints--;
	}
	else
		std::cout << "❌ ClapTrap " << _name << " can't attack (no energy or is dead) ❌" << std::endl;
}


void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints == 0)
	{
		std::cout << "💀 ClapTrap " << _name << " is already dead 💀";
		return ;
	}

	if (_hitPoints > 0)
		_hitPoints -= amount;
	else
		_hitPoints = 0;

	std::cout << "❤️ ClapTrap " << _name << " takes " << amount
			  << " damage. Remaining HP: " << _hitPoints << " ❤️" << std::endl;
}


void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		_hitPoints += amount;
		_energyPoints--;
		std::cout << "🔧 ClapTrap " << _name << " repairs itself for " << amount
				  << ". HP now: " << _hitPoints << " 🔧" << std::endl;
	}
	else
		std::cout << "❌ ClapTrap " << _name << " can't be repaired (no energy or is dead) ❌"
				  << std::endl;
}
