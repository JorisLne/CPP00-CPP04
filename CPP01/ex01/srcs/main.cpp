/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 11:21:23 by jlaine            #+#    #+#             */
/*   Updated: 2025/05/19 17:13:50 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int main(int ac, char** av) 
{
	if (ac != 3)
	{
		std::cerr << "Usage: " << av[0] << " <count> <name>\n";
		return (1);
	}

	int N = std::atoi(av[1]);
	if (N <= 0 || N > INT_MAX) 
	{
		std::cerr << "<count> must be positive integer\n";
		return 1;
	}

	Zombie* horde = zombieHorde(N, av[2]);
	if (!horde)
	{
		std::cerr << "Horde too big to be allocated\n";
		return (1);
	}
	for (int i = 0; i < N; ++i)
		horde[i].announce();

	delete[] horde;
	return (0);
}
