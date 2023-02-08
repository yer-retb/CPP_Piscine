/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 21:04:18 by yer-retb          #+#    #+#             */
/*   Updated: 2023/02/02 01:25:11 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB
{
	private :
		std::string type;
		Weapon *W_B;

	public :

		HumanB(std::string str);
		
		void		setWeapon(Weapon &W_B);
		std::string	getWeapon();
		
		void	attack();
};



#endif
