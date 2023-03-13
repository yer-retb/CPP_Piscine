/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 06:21:47 by yer-retb          #+#    #+#             */
/*   Updated: 2023/03/09 20:45:47 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

struct Data{
	int n;
};

class Serializer {

	public:
		Serializer();
		~Serializer();
		Serializer (Serializer const & other);
		Serializer &operator=(Serializer const & other);
		uintptr_t serialize (Data* ptr);
		Data* deserialize (uintptr_t raw);
};

#endif