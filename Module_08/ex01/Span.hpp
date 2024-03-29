/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:13:16 by yer-retb          #+#    #+#             */
/*   Updated: 2023/04/24 14:36:49 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <vector>
#include <algorithm>

#include <iostream>

class Span {
	private :
		unsigned int _N;
		std::vector<int> span;
	public :
		Span ();
		Span (unsigned int _N);
		~Span ();
		Span (Span const &other);
		Span &operator=(Span const &other);

		void addNumber(int n);
		long long shortestSpan();
		long long longestSpan();
		void ft_range(std::vector<int> _V);
		
};

#endif