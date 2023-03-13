/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 02:09:35 by yer-retb          #+#    #+#             */
/*   Updated: 2023/03/13 10:58:28 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter (T *arr, size_t lenght, void (*function)(T ))
{
	for ( size_t i = 0; i < lenght; i++)
		function(arr[i]);
}

template <typename T>
void iter (const T *arr, size_t lenght, void (*function)(T const &))
{
	for ( size_t i = 0; i < lenght; i++)
		function(arr[i]);
}

template <typename T>
void function(T val)
{
	std::cout << val << std::endl;
}


#endif