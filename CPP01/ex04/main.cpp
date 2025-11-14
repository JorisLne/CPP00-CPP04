/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 15:32:36 by jlaine            #+#    #+#             */
/*   Updated: 2025/05/20 17:32:24 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>
#include <iostream>

bool	checkArgs(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Usage : " << av[0] << " <filename> <s1> <s2>" << std::endl;
		return (false);
	}
	if (std::string(av[2]).empty())
	{
		std::cerr << "<s1> can't be empty" << std::endl;
		return (false);
	}
	return (true);
}


std::string	replaceLine(const std::string &line, const std::string &s1, const std::string &s2)
{
	size_t		found;
	size_t		pos = 0;
	std::string	result;

	while ((found = line.find(s1, pos)) != std::string::npos)
	{
		result.append(line.substr(pos, found - pos));
		result.append(s2);
		pos = found + s1.length();
	}
	result.append(line.substr(pos));
	return (result);
}


bool	processFile(const std::string &filename, const std::string &s1, const std::string &s2)
{
	std::ifstream infile(filename.c_str());
	if (!infile.is_open())
	{
		std::cerr << "Couldn't open input file" << std::endl;
		return (false);
	}

	std::ofstream outfile((filename + ".replace").c_str());
	if (!outfile.is_open())
	{
		std::cerr << "Couldn't create output file" << std::endl;
		return (false);
	}

	std::string	line;
	while (std::getline(infile, line))
	{
		outfile << replaceLine(line, s1, s2);
		if (!infile.eof())
			outfile << std::endl;
	}
	
	infile.close();
	outfile.close();
	return (true);
}


int	main(int ac, char **av)
{
	if (!checkArgs(ac, av))
		return (1);

	std::string	filename = av[1];
	std::string	s1 = av[2];
	std::string s2 = av[3];
	
	if (s1 == s2)
		std::cerr << "s1 & s2 are identical - no change will occur" << std::endl;

	if (!processFile(filename, s1, s2))
		return (1);
	
	return (0);
}
