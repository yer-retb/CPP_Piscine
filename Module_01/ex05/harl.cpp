/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 20:45:08 by yer-retb          #+#    #+#             */
/*   Updated: 2023/02/09 03:06:35 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

void harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't putenough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void harl::complain(std::string level)
{
	void (harl::*tab[4])(void)= {&harl::debug,&harl::info,&harl::warning,&harl::error};
	std::string str[4] = {"debug","info","warning","error"};
	int i = 0;
	while(i < 4)
	{
		if(str[i] == level)
		{
			(this->*tab[i])();
			break ;
		}
		i++;
	}
}