/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 20:25:24 by yer-retb          #+#    #+#             */
/*   Updated: 2023/02/11 00:30:19 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void	my_replace(char **av, std::string line)
{
	int i = 0;
	std::string f_name = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	if (s1.empty()){
		std::cout << "empty string" << std::endl;
		exit(EXIT_FAILURE);
	}
	if (s2.empty()){
		std::cout << "empty string" << std::endl;
		exit(EXIT_FAILURE);
	}
	while ((i = line.find(s1, i)) != -1)
	{
		line.erase(i, s1.length());
		line.insert(i, s2);
		i += s2.length();
	}
	std::ofstream file(f_name + ".replace");
	file << line;
	file.close();
}

int main (int ac, char **av)
{
	if (ac == 4)
	{
		std::ifstream file(av[1]);
		if (file.is_open())
		{
			std::string line;
			std::string tmp;
			while (std::getline(file, tmp))
				line = line + tmp + '\n';
			my_replace(av, line);
		}
		else
			std::cout << "Error : no such file `" << av[1] << "\'"<< std::endl;
	}
	else
		std::cout << "Check your argumant" << std::endl;
}