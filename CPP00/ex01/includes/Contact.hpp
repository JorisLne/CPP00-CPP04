/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 18:55:56 by jorislaine        #+#    #+#             */
/*   Updated: 2025/05/13 15:13:29 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iomanip>
#include <iostream>

class Contact
{
	private: 
		std::string	firstName_;
		std::string	lastName_;
		std::string	nickName_;
		std::string	phoneNumber_;
		std::string	darkestSecret_;

	public:
		void	setInfo();
		void	setFirstName();
		void	setLastName();
		void	setNickName();
		void	setPhoneNumber();
		void	setDarkestSecret();
		void	displayDetails() const;
		void	displaySummary(int index) const;
};

#endif