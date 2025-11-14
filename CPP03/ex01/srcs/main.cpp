/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 13:04:43 by jlaine            #+#    #+#             */
/*   Updated: 2025/05/27 18:42:41 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"

int main()
{
	std::cout << "\n--- 🧱 Creating ScavTrap ---" << std::endl;
	ScavTrap basic("Omar");
	ScavTrap gatekeeper("Fred");

	std::cout << "\n--- ⚔️  ClapTrap attacks ---" << std::endl;
	basic.attack("enemy");
	basic.takeDamage(5);
	basic.beRepaired(3);

	std::cout << "\n--- ⚔️  ScavTrap attacks (should override ClapTrap) ---" << std::endl;
	gatekeeper.attack("intruder");
	gatekeeper.takeDamage(20);
	gatekeeper.beRepaired(10);

	std::cout << "\n--- 🛡  ScavTrap special ability ---" << std::endl;
	gatekeeper.guardGate();

	std::cout << "\n--- 💀 Death test ---" << std::endl;
	gatekeeper.takeDamage(200);
	gatekeeper.attack("nobody");
	gatekeeper.beRepaired(20);
	gatekeeper.guardGate();

	std::cout << "\n--- 🧹 Destructor messages incoming ---" << std::endl;
	return 0;
}
