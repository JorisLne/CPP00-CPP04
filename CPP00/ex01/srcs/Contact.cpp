/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 18:55:54 by jorislaine        #+#    #+#             */
/*   Updated: 2025/05/15 12:49:33 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

void	Contact::setInfo() 
{
	this->setFirstName();
	this->setLastName();
	this->setNickName();
	this->setPhoneNumber();
	this->setDarkestSecret();
}

void	Contact::setFirstName() 
{
	std::string input;

	std::cout << "👉 Enter first name : ";
	std::getline(std::cin, input);
	while (input.empty()) {
		std::cout << "Empty field 😔. Enter first name : ";
		std::getline(std::cin, input);
	}
	this->firstName_ = input;
}

void Contact::setLastName() 
{
	std::string input;

	std::cout << "👉 Enter last name : ";
	std::getline(std::cin, input);
	while (input.empty()) {
		std::cout << "Empty field 😔. Enter last name ";
		std::getline(std::cin, input);
	}
	this->lastName_ = input;
}

void	Contact::setNickName() 
{
	std::string input;

	std::cout << "👉 Enter nickname : ";
	std::getline(std::cin, input);
	while (input.empty()) {
		std::cout << "Empty field 😔. Enter nickname : ";
		std::getline(std::cin, input);
	}
	this->nickName_ = input;
}

bool	isDigitsOnly(const std::string& str)
{
	for (size_t i = 0; i < str.length(); i++) 
	{
		if (!std::isdigit(str[i]))
			return false;
	}
	return (!str.empty());
}

void Contact::setPhoneNumber() 
{
	std::string input;

	std::cout << "📞 Enter phone number 📞 : ";
	std::getline(std::cin, input);

	while (input.empty() || !isDigitsOnly(input)) {
		std::cout << "Invalid input 😔. Only digits required : ";
		std::getline(std::cin, input);
	}
	this->phoneNumber_ = input;
}


void	Contact::setDarkestSecret() 
{
	std::string input;

	std::cout << "🔍 Enter darkest secret 🔍 : ";
	std::getline(std::cin, input);
	while (input.empty()) {
		std::cout << "Empty field 😔. Enter darkest secret : ";
		std::getline(std::cin, input);
	}
	this->darkestSecret_ = input;
}

std::string	truncateField(const std::string& str) 
{
	if (str.length() > 10) 
		return (str.substr(0, 9) + ".");
	return str;
}

void	Contact::displaySummary(int index) const 
{
	std::cout << "|";
	std::cout << std::setw(10) << std::right << index << "|";
	std::cout << std::setw(10) << std::right << truncateField(this->firstName_) << "|";
	std::cout << std::setw(10) << std::right << truncateField(this->lastName_) << "|";
	std::cout << std::setw(10) << std::right << truncateField(this->nickName_) << "|";
	std::cout << std::endl;
}

void	Contact::displayDetails() const 
{
	std::cout << "First Name : " << this->firstName_ << std::endl;
	std::cout << "Last Name : " << this->lastName_ << std::endl;
	std::cout << "Nickname : " << this->nickName_ << std::endl;
	std::cout << "Phone Number : " << this->phoneNumber_ << std::endl;
	std::cout << "Darkest Secret : " << this->darkestSecret_ << std::endl;
}
