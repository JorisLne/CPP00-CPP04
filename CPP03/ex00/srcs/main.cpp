/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 13:05:01 by jlaine            #+#    #+#             */
/*   Updated: 2025/05/27 17:23:52 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

int	main(void)
{
	std::cout << "--- Creating ClapTraps ---" << std::endl;
	ClapTrap	a("Omar");
	ClapTrap	b("Fred");

	std::cout << "\n--- Testing attack ---" << std::endl;
	a.attack("Fred");
	a.takeDamage(3);

	std::cout << "\n--- Testing repair ---" << std::endl;
	b.beRepaired(5);

	std::cout << "\n--- Testing death ---" << std::endl;
	b.takeDamage(100);
	b.attack("Omar");
	b.beRepaired(2);

	std::cout << "\n--- Testing energy burnout ---" << std::endl;
	for (int i = 0; i < 10; i++)
		a.attack("Fred");
	a.attack("Fred");

	std::cout << std::endl;
	return (0);
}

