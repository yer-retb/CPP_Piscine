/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 04:37:59 by yer-retb          #+#    #+#             */
/*   Updated: 2023/01/25 20:30:19 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>
#include <csignal>

std::string	is_empty(std::string str, std::string msg)
{
	while (str.empty() && !std::cin.eof())
	{
		std::cout << "input not valid\n";
		std::cout << msg;
		std::getline(std::cin, str);
	}
	return (str);
}

void PhoneBook::Add()
{
	std::string str;
	static int i;

	std::cout << "first name : ";
	std::getline(std::cin, str);
	str = is_empty(str, "first name : ");
	if (str.length() > 10)
	{
		str = str.substr(0, 9);
		str.append(1, '.');
		this->contact[i].set_first_name(str);
	}
	else
		this->contact[i].set_first_name(str);
	str.clear();

	std::cout << "last name : ";
	std::getline(std::cin, str);
	str = is_empty(str, "last name : ");
	if (str.length() > 10)
	{
		str = str.substr(0, 9);
		str.append(1, '.');
		this->contact[i].set_last_name(str);
	}
	else
		this->contact[i].set_last_name(str);
	str.clear();

	std::cout << "nickname : ";
	std::getline(std::cin, str);
	str = is_empty(str, "nickname : ");
	if (str.length() > 10)
	{
		str = str.substr(0, 9);
		str.append(1, '.');
		this->contact[i].set_nickname(str);
	}
	else
		this->contact[i].set_nickname(str);
	str.clear();

	std::cout << "phone number : ";
	std::getline(std::cin, str);
	str = is_empty(str, "phone number : ");
	if (str.length() > 10)
	{
		str = str.substr(0, 9);
		str.append(1, '.');
		this->contact[i].set_phone_number(str);
	}
	else
		this->contact[i].set_phone_number(str);
	str.clear();

	std::cout << "darkest secret : ";
	std::getline(std::cin, str);
	str = is_empty(str, "darkest secret : ");
	if (str.length() > 10)
	{
		str = str.substr(0, 9);
		str.append(1, '.');
		this->contact[i].set_darkest_secret(str);
	}
	else
		this->contact[i].set_darkest_secret(str);
	str.clear();
	this->index++;
	if (this->index > 8)
		this->index = 8;
	i++;
	if (i == 8)
		i = 0;
}

int if_is_num(std::string str, std::string msg, int index)
{
	int i;

	i = (str[0] - 48);
	while (i < 0 || i > index - 1)
	{
		std::cout << "Index out of range" << std::endl;
		std::cout << msg;
		std::cin >> i;
	}
	return i;
}

void	PhoneBook::Search()
{
	std::string	index;
	int			i = 0;

	std::cout << "+----------+----------+----------+----------+" << std::endl;
	std::cout << "|  INDEX   |  F_NAME  |  L_NAME  | NICKNAME |" << std::endl;
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	while (i < this->index)
	{
		std::cout << "|     " << i << "    |" << std::left \
			<< std::setw(10) << this->contact[i].get_first_name() << "|" \
			<< std::setw(10) << this->contact[i].get_last_name() << "|" \
			<< std::setw(10) << this->contact[i].get_nickname() << "|" << std::endl;
		std::cout << "+----------+----------+----------+----------+" << std::endl;
		i++;
	}
	
	std::cout << "Ste Index : ";
	std::getline(std::cin , index);
	i = if_is_num(index, "Ste Index : ", this->index);
	std::cout << "+----------+----------+----------+----------+----------+----------+" << std::endl;
	std::cout << "|  INDEX   |  F_NAME  |  L_NAME  | NICKNAME | P_NUMBER | D_SECRET |" << std::endl;
	std::cout << "+----------+----------+----------+----------+----------+----------+" << std::endl;
	std::cout << "|     " << i << "    |" << std::left \
			  << std::setw(10) << this->contact[i].get_first_name() << "|" \
			  << std::setw(10) << this->contact[i].get_last_name() << "|" \
			  << std::setw(10) << this->contact[i].get_nickname() << "|" \
			  << std::setw(10) << this->contact[i].get_phone_number() << "|" \
			  << std::setw(10) << this->contact[i].get_darkest_secret() \
			  << "|" << std::endl;
	std::cout << "+----------+----------+----------+----------+----------+----------+" << std::endl;
	index.clear();
	i = 0;
}

void	PhoneBook::Exit()
{
	exit(EXIT_SUCCESS);
}