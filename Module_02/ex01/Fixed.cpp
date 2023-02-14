/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 02:31:19 by yer-retb          #+#    #+#             */
/*   Updated: 2023/02/12 23:11:43 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
	fix = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
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
	std::cout << "Int constructor called" << std::endl;
	fix = i << bit;
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
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