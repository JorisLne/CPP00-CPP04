/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 18:56:01 by jorislaine        #+#    #+#             */
/*   Updated: 2025/05/15 11:52:14 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

#include <cctype> // isdigit, toupper, isspace
#include <string> // std::string, getline
#include <iomanip> // setw
#include <iostream> // cout, cin, endl

class PhoneBook 
{
private:
	int		size;
	int		index;
	Contact contacts[8];

public:
	PhoneBook();
	void	addContact();
	void	displayContacts();
	bool	isValidIndex(const std::string& input) const;
};

#endif