/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 02:39:52 by yer-retb          #+#    #+#             */
/*   Updated: 2023/02/10 23:59:15 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    zombieHorde(int N, std::string name)
{
	Zombie *z = new Zombie [N];

	for(int i = 0; i < N; i++)
	{
		z[i].set_name(name);
		z[i].announce();
	}
	return (z);
}