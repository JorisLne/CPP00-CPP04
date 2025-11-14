/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 11:31:29 by jlaine            #+#    #+#             */
/*   Updated: 2025/06/06 15:54:16 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#define RESET	"\033[0m"
#define RED		"\033[31m"
#define GREEN	"\033[32m"
#define BLUE	"\x1B[36m"
#define YELLOW	"\033[33m"
#define BLINK	"\033[5m"

#include "AMateria.hpp"

class	Cure : public AMateria
{
	public:
		Cure(void);
		virtual ~Cure(void);
		Cure(const Cure &other);
		Cure &operator=(const Cure &other);

		Cure		*clone(void) const;
		void		use(ICharacter &target);
};

#endif
