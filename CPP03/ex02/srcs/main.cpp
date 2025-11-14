/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 13:04:17 by jlaine            #+#    #+#             */
/*   Updated: 2025/06/02 13:26:25 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"
#include "../include/FragTrap.hpp"

int	main(void)
{
	std::cout << "\n--- 🧱 ClapTrap Test ---\n" << std::endl;
	ClapTrap clap("Clappy");
	clap.attack("enemy");
	clap.takeDamage(5);
	clap.beRepaired(3);

	std::cout << "\n--- 🛡 ScavTrap Test ---\n" << std::endl;
	ScavTrap scav("Scavy");
	scav.attack("intruder");
	scav.takeDamage(20);
	scav.beRepaired(10);
	scav.guardGate();

	std::cout << "\n--- 💣 FragTrap Test ---\n" << std::endl;
	FragTrap frag("Fraggy");
	frag.attack("boss");
	frag.takeDamage(40);
	frag.beRepaired(25);
	frag.highFivesGuys();

	std::cout << "\n--- 🧹 Destructor messages incoming ---\n" << std::endl;
	return (0);
}
