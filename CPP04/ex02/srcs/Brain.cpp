/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 11:41:38 by jlaine            #+#    #+#             */
/*   Updated: 2025/06/04 12:43:07 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain(void)
{
	std::cout << GREEN << "[Brain] default constructor called" << RESET << std::endl;

	for (int i = 0; i < 100; i++)
		_ideas[i] = "";
}


Brain::Brain(const Brain &other)
{
	std::cout << GREEN << "[Brain] copy constructor called" << RESET << std::endl;

	for (int i = 0; i < 100; i++)
		_ideas[i] = other._ideas[i];
}


Brain	&Brain::operator=(const Brain &other)
{
	std::cout << YELLOW << "[Brain] assignment operator called" << RESET << std::endl;

	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			_ideas[i] = other._ideas[i];
	}

	return (*this);
}


Brain::~Brain(void)
{
	std::cout << RED << "[Brain] destructor called" << RESET << std::endl;
}


std::string	Brain::getIdea(int i) const
{
	if (i >= 0 && i < 100)
		return (_ideas[i]);
	return ("");
}


void	Brain::setIdea(int i, const std::string &idea)
{
	if (i >= 0 && i < 100)
		_ideas[i] = idea;
}