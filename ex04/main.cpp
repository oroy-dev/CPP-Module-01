/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:28:08 by oroy              #+#    #+#             */
/*   Updated: 2024/01/23 20:18:43 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void	create_output(std::string &s1, std::string &s2, std::ifstream &ifs, std::ofstream &ofs)
{
	std::string::size_type	pos;
	std::string				line;

	while (ifs.good())
	{
		std::getline(ifs, line);
		while (!s2.empty() && (pos = line.find(s1)) != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
		}
		if (ifs.eof())
			ofs << line;
		else
			ofs << line << std::endl;
	}
}

int	main(int argc, char **argv)
{
	std::string		s1, s2;
	std::ifstream	ifs;
	std::ofstream	ofs;

	if (argc == 1)
	{
		std::cout << "[ERROR]	Please provide at least an input file:" << std::endl;
		std::cout << "	<filename>, <string to find>, <string used as replacement>" << std::endl;
		return (1);
	}
	else if (argc >= 4)
	{
		s1 = argv[2];
		s2 = argv[3];
	}
	ifs.open(argv[1]);
	ofs.open("out");
	create_output(s1, s2, ifs, ofs);
	ifs.close();
	ofs.close();
	return (0);
}
