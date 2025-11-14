/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 18:55:59 by jorislaine        #+#    #+#             */
/*   Updated: 2025/05/15 12:43:10 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook() 
{
	this->size = 0;
	this->index = 0;
}

void	printHeader() 
{
	std::cout << "|";
	std::cout << std::setw(10) << std::right << "Index" << "|";
	std::cout << std::setw(10) << std::right << "First Name" << "|";
	std::cout << std::setw(10) << std::right << "Last Name" << "|";
	std::cout << std::setw(10) << std::right << "Nickname" << "|";
	std::cout << std::endl;
}

bool	PhoneBook::isValidIndex(const std::string& input) const
{
	return (input.length() == 1
		&& std::isdigit(input[0])
		&& (input[0] >= '0' && input[0] <= '7'));
}

void	PhoneBook::displayContacts()
{
	int			index;
	std::string	input;
	
	if (this->size == 0)
	{
		std::cout << "No contact saved" << std::endl;
		return ;
	}
	printHeader();
	for (int i = 0; i < this->size; i++)
		this->contacts[i].displaySummary(i);
	std::cout << "Enter contact index to be displayed (0 to " << (this->size - 1) << ") : ";
	std::getline(std::cin, input);
	if (this->isValidIndex(input))
	{
		index = input[0] - '0';
		if (index >= 0 && index < this->size)
			this->contacts[index].displayDetails();
		else
			std::cout << "🚨 Wrong index 🚨 : no contact to display" << std::endl;
	}
	else
		std::cout << "🚨 Invalid input 🚨 : please type a number between 0 and " << (this->size - 1) << ") : " << std::endl;
}

void	PhoneBook::addContact()
{
	std::cout << "🤙 Add new contact 🤙" << std::endl;

	int targetIndex = this->size < 8 ? this->size : this->index;
	this->contacts[targetIndex].setInfo();
	if (this->size < 8)
		this->size++;
	this->index = (this->index + 1) % 8;
	std::cout << "✨ Registered contact ✨" << std::endl;
}
