/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 17:14:57 by jlaine            #+#    #+#             */
/*   Updated: 2025/05/19 17:32:53 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	std::string	message = "HI THIS IS BRAIN";
	std::string	*stringPTR = &message;
	std::string	&stringREF = message;

	std::cout << "message address    : " << &message << std::endl;
	std::cout << "stringPTR address  : " << stringPTR << std::endl;
	std::cout << "stringREF address  : " << &stringREF << std::endl;
	std::cout << std::endl;

	std::cout << "message value   : " << message << std::endl;
	std::cout << "stringPTR value : " << *stringPTR << std::endl;
	std::cout << "stringREF value : " << stringREF << std::endl;
}
