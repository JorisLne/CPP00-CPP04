/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 11:32:20 by jlaine            #+#    #+#             */
/*   Updated: 2025/06/06 14:21:04 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#define RESET	"\033[0m"
#define RED		"\033[31m"
#define GREEN	"\033[32m"
#define BLUE	"\x1B[36m"
#define YELLOW	"\033[33m"
#define BLINK	"\033[5m"

#include "AMateria.hpp"
#include "ICharacter.hpp"


class	Character : public ICharacter
{
	private :
		std::string	_name;
		AMateria	*_inventory[4];

	public:
		Character(void);
		virtual ~Character(void);
		Character(const std::string &name);
		Character(const Character &other);
		Character &operator=(const Character &other);

		std::string const &getName() const;
		void unequip(int idx);
		void equip(AMateria* m);
		void use(int idx, ICharacter& target);

		void displayCharacterInventory();
};

#endif
