/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 17:40:04 by jlaine            #+#    #+#             */
/*   Updated: 2025/05/21 14:16:45 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]\n"
			  << "I love having extra bacon for my 7XL-double-cheese-"
			  << "triple-pickle-special-ketchup burger. I really do!" << std::endl << std::endl;
}


void	Harl::info(void)
{
	std::cout << "[ INFO ]\n"
			  << "I cannot believe adding extra bacon costs more money."
			  << "You didn’t put enough bacon in my burger!"
			  << "If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
}


void	Harl::warning(void)
{
	std::cout << "[ WARNING ]\n"
			  << "I think I deserve to have some extra bacon for free."
			  << "I’ve been coming for years, whereas you started working here just last month." << std::endl << std::endl;
}


void	Harl::error(void)
{
	std::cout << "[ ERROR ]\n"
			  << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}


int	getLevelIndex(const std::string &level)
{
	std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	
	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
			return (i);
	}
	return (-1);
}


void	Harl::complain(std::string level)
{
	void	(Harl::*functions[])() = 
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error,
	};

	int	index = getLevelIndex(level);
	if (index == -1)
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        return;
	}
	(this->*functions[index])();
}
