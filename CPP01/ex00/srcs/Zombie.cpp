/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 16:08:05 by jlaine            #+#    #+#             */
/*   Updated: 2025/05/17 17:42:18 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) // avoid this->_name = name 
{
	std::cout << "🧟 Zombie " << this->_name << " is born 🧟" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "💀 Zombie " << this->_name << " has disappeared 💀" << std::endl;
}

void	Zombie::announce(void) const
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
