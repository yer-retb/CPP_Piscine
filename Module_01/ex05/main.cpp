/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 04:45:41 by yer-retb          #+#    #+#             */
/*   Updated: 2023/02/09 03:07:08 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

int main()
{
	harl s;
	s.complain("debug");
	s.complain("info");
	s.complain("warning");
	s.complain("NULL");
}
