/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 22:58:14 by yer-retb          #+#    #+#             */
/*   Updated: 2023/01/25 20:25:34 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <string>
#include <csignal>
#include <iostream>

void ft_enter()
{
	std::cout << "\n[1] ADD \n[2] SEARCH \n[3] EXIT \n\n   Chose  :  ";
	
}

int main()
{
	std::string input;
	PhoneBook	phoneBook;

	phoneBook.index = 0;
	ft_enter();
	while (std::getline(std::cin, input))
	{
		if (input == "1")
			phoneBook.Add();
		else if (input == "2")
			phoneBook.Search();
		else if (input == "3")
			phoneBook.Exit();
		else
		{
			if (input == "")
			{
				// ft_enter();
				continue ;
			}
			std::cout << "invalide input \n";
		}
		input.clear();
		ft_enter();
	}
}
