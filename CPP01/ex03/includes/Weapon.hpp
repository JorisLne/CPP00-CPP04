/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 17:35:38 by jlaine            #+#    #+#             */
/*   Updated: 2025/05/20 11:33:43 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class	Weapon
{
	private:
		std::string	_type;

	public:
		Weapon(std::string type); // constructeur w/param

		void	setType(std::string type); // setter
		const	std::string &getType() const; // getter (ref)
};

#endif