/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 11:28:46 by jlaine            #+#    #+#             */
/*   Updated: 2025/06/06 11:21:11 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iostream>

#include "ICharacter.hpp"

#define RESET	"\033[0m"
#define RED		"\033[31m"
#define GREEN	"\033[32m"
#define BLUE	"\x1B[36m"
#define YELLOW	"\033[33m"
#define BLINK	"\033[5m"

class	AMateria
{
	protected:
		std::string	_type;

	public:
		AMateria(void);
		virtual ~AMateria(void);
		AMateria(const AMateria &other);
		AMateria(const std::string &type);
		AMateria &operator=(const AMateria &other);

		const std::string	&getType(void) const;

		virtual AMateria	*clone(void) const = 0;
		virtual void		use(ICharacter &target);
};

#endif
