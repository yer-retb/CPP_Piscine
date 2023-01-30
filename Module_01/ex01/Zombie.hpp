/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 00:11:37 by yer-retb          #+#    #+#             */
/*   Updated: 2023/01/30 03:58:59 by yer-retb         ###   ########.fr       */
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

		void	announce();
		void	set_name(std::string name);
		Zombie();
		~Zombie();
};

Zombie*    zombieHorde(int N, std::string name);

#endif
