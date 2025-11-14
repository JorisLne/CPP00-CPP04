/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 11:31:48 by jlaine            #+#    #+#             */
/*   Updated: 2025/06/06 12:48:04 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <string>
#include <iostream>

#define RESET	"\033[0m"
#define RED		"\033[31m"
#define GREEN	"\033[32m"
#define BLUE	"\x1B[36m"
#define YELLOW	"\033[33m"
#define BLINK	"\033[5m"

class	AMateria;

class	ICharacter
{
	public:
		virtual	~ICharacter() {}
		virtual	std::string const &getName() const = 0;
		virtual void unequip(int idx) = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

#endif