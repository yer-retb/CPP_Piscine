/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:34:33 by yer-retb          #+#    #+#             */
/*   Updated: 2023/03/13 15:47:45 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>

template<typename T>
void easyfind(T Cont, int N)
{
	typename T::iterator start = Cont.begin();
	typename T::iterator end = Cont.end();

	typename T::iterator value = std::find(start, end, N);

	if (value == end)
		std::cout << "Not found\n";
	else
		std::cout << *value << std::endl;
}
#endif