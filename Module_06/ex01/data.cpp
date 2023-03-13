/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 06:21:45 by yer-retb          #+#    #+#             */
/*   Updated: 2023/03/09 20:46:45 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.hpp"

Serializer::Serializer(){
}

Serializer::~Serializer(){
}

Serializer::Serializer (Serializer const & other){
	*this = other;
}

Serializer &Serializer::operator=(Serializer const & other){
	(void)other;
	return *this;
}

uintptr_t Serializer::serialize (Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *Serializer::deserialize (uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}