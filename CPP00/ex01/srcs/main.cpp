/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 18:10:57 by jorislaine        #+#    #+#             */
/*   Updated: 2025/05/15 11:58:32 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

int	main(int ac, char **av)
{
	(void)av;
	std::string	command;
	PhoneBook	phonebook;

	if (ac > 1)
	{
		std::cout << "Phonebook doesn't take any arguments 😉" << std::endl;
		return (1);
	}
	while (true)
	{
		std::cout << "\033[32m⭐ Enter command\033[0m ⭐ (ADD, SEARCH, EXIT) : ";
		std::getline(std::cin, command);
		if (command == "ADD")
			phonebook.addContact();
		else if (command == "SEARCH")
			phonebook.displayContacts();
		else if (command == "EXIT")
		{
			std::cout << "See you later 😇" << std::endl;
			break ;
		} 
		else
			std::cout << "\033[31mUnknown command 🧐. Retry with ADD, SEARCH or EXIT\033[0m" << std::endl;
	}
	return (0);
}
