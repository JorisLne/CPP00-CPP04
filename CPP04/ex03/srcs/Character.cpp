/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 11:32:12 by jlaine            #+#    #+#             */
/*   Updated: 2025/06/06 15:03:08 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"

Character::Character(void) : _name("Default")
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}


Character::Character(const std::string &name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}


Character::Character(const Character &other) : _name(other._name)
{
	for (int i = 0; i < 4; i++)
	{
		if (other._inventory[i])
			_inventory[i] = other._inventory[i]->clone(); // deep copy
		else
			_inventory[i] = NULL;
	}
}


Character	&Character::operator=(const Character &other)
{
	if (this != &other)
	{
		_name = other._name;
		for (int i = 0; i < 4; i++)
		{
			if (_inventory[i]) delete _inventory[i];
			if (other._inventory[i])
				_inventory[i] = other._inventory[i]->clone();
			else
				_inventory[i] = NULL;
		}
	}
	return (*this);
}


Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
		if (_inventory[i]) delete _inventory[i];
}


std::string const	&Character::getName() const
{
	return (_name);
}


void	Character::equip(AMateria *m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m;
			return ;
		}
	}
	delete m; // frees memory if it can't be stored
}


void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		_inventory[idx] = NULL;
}


void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && _inventory[idx])
		_inventory[idx]->use(target);
}


void Character::displayCharacterInventory() 
{
	std::cout << BLUE << "📦 Inventory" << RESET << std::endl;
	for (int i = 0; i < 4; ++i)
	{
		if (_inventory[i])
			std::cout << "  Slot " << i << ": " << _inventory[i]->getType() << std::endl;
		else
			std::cout << "  Slot " << i << ": " << "(empty)" << std::endl;
	}
}