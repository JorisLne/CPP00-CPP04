/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 16:07:24 by jlaine            #+#    #+#             */
/*   Updated: 2025/05/17 17:57:58 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int	main(void)
{
	std::cout << "--- Test randomChump function (stack 📚) ---" << std::endl;
	randomChump("StackZ");

	std::cout << std::endl
			  << "--- Test newZombie function (heap 💩)" << std::endl;
	Zombie	*heapZombie = newZombie("HeapZ");

	delete (heapZombie);
	return (0);
}
