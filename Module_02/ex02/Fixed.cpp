/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 02:31:19 by yer-retb          #+#    #+#             */
/*   Updated: 2023/02/15 16:11:30 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
	fix = 0;
}

Fixed::~Fixed(){
}

Fixed::Fixed(const Fixed &other)
{
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	fix = other.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	return (this->fix);
}

void Fixed::setRawBits(int const raw)
{
	this->fix = raw;
}

Fixed::Fixed(const int i)
{
	fix = i << bit;
}

Fixed::Fixed(const float num)
{
	fix = roundf(num * (1 << bit));
}

float Fixed::toFloat(void) const
{
	return ((float) fix / (1 << bit));
}

int Fixed::toInt(void) const
{
	return (fix >> bit);
}

std::ostream &operator<<(std::ostream &other ,const Fixed &Fixed)
{
	other << Fixed.toFloat();
	return other;
}

Fixed Fixed::operator+(const Fixed &other) const
{
	Fixed x;
	x.setRawBits(this->fix + other.fix);
	return (x);
}

Fixed Fixed::operator-(const Fixed &other) const
{
	Fixed x;
	x.setRawBits(this->fix - other.fix);
	return (x);
}

Fixed Fixed::operator*(const Fixed &other) const
{
	Fixed x;
	x.setRawBits((this->fix * other.fix) / (1 << bit));
	return (x);
}

Fixed Fixed::operator/(const Fixed &other) const
{
	Fixed x;
	x.setRawBits((this->fix / other.fix) * (1 << bit));
	return (x);
}

bool Fixed::operator>(const Fixed &other) const
{
	return (fix > other.fix);
}

bool Fixed::operator<(const Fixed &other) const
{
	return (fix < other.fix);
}

bool Fixed::operator==(const Fixed &other) const
{
	return (fix == other.fix);
}

bool Fixed::operator!=(const Fixed &other) const
{
	return (fix != other.fix);
}

bool Fixed::operator<=(const Fixed &other) const
{
	return (fix <= other.fix);
}

bool Fixed::operator>=(const Fixed &other) const
{
	return (fix >= other.fix);
}

Fixed Fixed::operator++()
{
	++fix;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp;

	tmp = *this; 
	fix++;
	return tmp;
}

Fixed Fixed::operator--()
{
	--fix;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp;

	tmp = *this; 
	fix--;
	return tmp;
}

Fixed &Fixed::min(Fixed &first, Fixed &second)
{
	if (first > second)
		return (second);
	else 
		return (first);
}

const Fixed &Fixed::min(const Fixed &first, const Fixed &second)
{
	if (first > second)
		return (second);
	else
		return (first);
}
 
Fixed &Fixed::max(Fixed &first, Fixed &second)
{
	if (first < second)
		return (second);
	else 
		return (first);
}

const Fixed &Fixed::max(const Fixed &first, const Fixed &second)
{
	if (first < second)
		return (second);
	else 
		return (first);
}