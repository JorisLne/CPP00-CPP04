/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 11:19:25 by jlaine            #+#    #+#             */
/*   Updated: 2025/05/19 16:20:09 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <new> // std::nothrow
#include <string>
#include <limits.h>
#include <iostream>

class	Zombie
{
	private:
		std::string	_name;
	
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
	
		void	announce(void) const;
		void	setName(std::string name);
};

Zombie	*zombieHorde(int N, std::string name);
