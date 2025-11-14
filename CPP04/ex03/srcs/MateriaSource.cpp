/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 11:34:38 by jlaine            #+#    #+#             */
/*   Updated: 2025/06/06 15:54:28 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		_templates[i] = NULL;
}


MateriaSource::MateriaSource(const MateriaSource &other)
{
	for (int i = 0; i < 4; i++)
	{
		if (other._templates[i])
			_templates[i] = other._templates[i]->clone(); // deep copy
		else
			_templates[i] = NULL;
	}
}


MateriaSource	&MateriaSource::operator=(const MateriaSource &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			delete _templates[i];
			if (other._templates[i])
				_templates[i] = other._templates[i]->clone();
			else
				_templates[i] = NULL;
		}
	}
	return (*this);
}


MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		if (_templates[i]) delete _templates[i];
}


void	MateriaSource::learnMateria(AMateria *m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (!_templates[i])
		{
			_templates[i] = m;
			return ;
		}
	}
	delete m;
}


AMateria	*MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_templates[i] && (_templates[i]->getType() == type))
			return _templates[i]->clone();
	}
	return (NULL);
}


void MateriaSource::displayMateriaSource()
{
	std::cout << BLUE << "MateriaSource templates:" << RESET << std::endl;
	for (int i = 0; i < 4; ++i)
	{
		if (_templates[i])
			std::cout << " Slot " << i << ": " << _templates[i]->getType() << std::endl;
		else
			std::cout << " Slot " << i << ": (empty)" << std::endl;
	}
}
