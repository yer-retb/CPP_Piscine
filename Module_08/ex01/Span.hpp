/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:13:16 by yer-retb          #+#    #+#             */
/*   Updated: 2023/03/13 20:41:45 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <vector>

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