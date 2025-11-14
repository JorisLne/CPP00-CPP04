/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 11:29:10 by jlaine            #+#    #+#             */
/*   Updated: 2025/06/06 14:58:31 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#define RESET	"\033[0m"
#define RED		"\033[31m"
#define GREEN	"\033[32m"
#define BLUE	"\x1B[36m"
#define YELLOW	"\033[33m"
#define BLINK	"\033[5m"

#include "AMateria.hpp"

class	Ice : public AMateria
{
	public:
		Ice(void);
		virtual ~Ice(void);
		Ice(const Ice &other);
		Ice &operator=(const Ice &other);

		Ice	*clone(void) const;
		void		use(ICharacter &target);
};

#endif
