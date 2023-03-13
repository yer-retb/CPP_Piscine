/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 08:30:53 by yer-retb          #+#    #+#             */
/*   Updated: 2023/03/13 16:03:26 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array{
	private:
		T* tab;
		size_t _size;
	public :
		Array(){
			tab = new T[0]();
			_size = 0;
		}
		~Array(){
			delete [] tab;
		}
		Array (unsigned int n){
			tab = new T[n]();
			_size = n;
		}
		Array(const Array& other){
			_size = other._size;
			tab = new T[_size];
			for (size_t i = 0; i < _size; i++){
				tab[i] = other.tab[i];
			}
		}
		Array & operator=(const Array& other){
			delete [] tab;
			_size = other._size;
			tab = new T[_size];
			for (size_t i; i < _size; i++){
				tab[i] = other.tab[i];
			}
			return *this;
		}
		T& operator[](size_t index){
			if (index < 0 || index >= _size)
				throw std::out_of_range("Index out of range");
			return tab[index];
		}
		const T& operator[](size_t index) const {
			if (index < 0 || index >= _size)
				throw std::out_of_range("Index out of range");
			return tab[index];
		}
		size_t size(){
			return (_size);
		}
};

#endif
