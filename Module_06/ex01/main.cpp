/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 06:13:03 by yer-retb          #+#    #+#             */
/*   Updated: 2023/03/12 18:45:36 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.hpp"

int main()
{
	Serializer s;
	Data *d = new Data;
	d->n = 1337;
	std::cout << "n: " << d->n << std::endl;
	uintptr_t raw = s.serialize (d);
	Data *d2 = s.deserialize (raw);
	std::cout << "n: " << d2->n << std::endl;
	delete d;
	return 0;
}