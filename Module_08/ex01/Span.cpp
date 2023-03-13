/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:20:04 by yer-retb          #+#    #+#             */
/*   Updated: 2023/03/13 20:43:42 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(){
}

Span::~Span(){	
}

Span::Span(unsigned int _N){
	this->_N = _N;
}

Span::Span (Span const &other){
	this->_N = other._N;
	this->span = other.span;
}

Span& Span::operator=(Span const &other){
	this->_N = other._N;
	this->span = other.span;
	return *this;
}

void Span::addNumber(int n){
	if (span.size() < _N)
		span.push_back(n);
	else
		throw std::out_of_range("out of range");
}

long long Span::longestSpan()
{
	if (span.size() <= 1)
		throw std::out_of_range("out of range");
	std::vector<int>::iterator i = span.begin();
	std::vector<int>::iterator j = span.end();
	
	std::vector<int>::iterator max = std::max_element(i, j);
	std::vector<int>::iterator min = std::min_element(i, j);

	return (*max - *min);
}

long long Span::shortestSpan()
{
	if (span.size() <= 1)
		throw std::out_of_range("out of range");
	std::vector<int>::iterator i = span.begin();
	std::vector<int>::iterator j = span.end();
	int tmp;
	std::sort(i, j);
	
	tmp = span[1] - span[0];
	for (unsigned int i = 0; i < span.size() - 1; i++)
	{
		if (span[i + 1] - span[i] < tmp)
			tmp = span[i + 1] - span[i];
	}
	return (tmp);
}

void Span::ft_range(std::vector<int> _V)
{
	if (_V.size() > _N)
		throw std::out_of_range("out of range");
	span.assign(_V.begin(), _V.end());
}