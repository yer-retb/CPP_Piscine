/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 21:04:11 by yer-retb          #+#    #+#             */
/*   Updated: 2023/01/31 23:13:00 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanA
{
	private :
		std::string type;
		Weapon &W_A;
	public :
		HumanA(std::string str, Weapon &a);
		void	attack();
		
};

#endif
