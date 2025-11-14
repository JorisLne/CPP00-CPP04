/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 13:03:54 by jlaine            #+#    #+#             */
/*   Updated: 2025/06/02 13:27:57 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"

int	main(void)
{
	std::cout << "--- 🔨 Constructing DiamondTrap ---" << std::endl;
    DiamondTrap diamond("Diamond");

    std::cout << "\n--- Who Am I ? ---" << std::endl;
    diamond.whoAmI();

    std::cout << "\n--- ⚔️ Attacking ---" << std::endl;
    diamond.attack("BadRobot");

    std::cout << "\n--- ❤️ Taking Damage ---" << std::endl;
    diamond.takeDamage(30);

    std::cout << "\n--- 🛠️  Repairing ---" << std::endl;
    diamond.beRepaired(20);

    std::cout << "\n--- 🧹 Destructor messages incoming ---" << std::endl;
    return (0);
}
