/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 00:11:37 by yer-retb          #+#    #+#             */
/*   Updated: 2023/01/30 01:15:36 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	
	private :
		std::string name;

	public :
		Zombie(std::string name);
		void	announce();
		~Zombie();
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif


//parametre constracter 
//copy constracter 
//default constracter 
//copy asignment constacter