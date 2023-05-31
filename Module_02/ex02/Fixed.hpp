/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 02:31:29 by yer-retb          #+#    #+#             */
/*   Updated: 2023/05/28 15:00:17 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{

	private :
		int fix;
		static const int bit = 8;

	public :
		Fixed();
		Fixed(const Fixed &other);
		Fixed(const int i);
		Fixed(const double num);
		Fixed& operator=(const Fixed &other);
		~Fixed();
		
		int getRawBits(void) const;
		void setRawBits(int const raw);
		
		double todouble(void) const;
		int toInt(void) const;

		Fixed operator+(const Fixed &other) const;
		Fixed operator-(const Fixed &other) const;
		Fixed operator*(const Fixed &other) const;
		Fixed operator/(const Fixed &other) const;

		bool operator>(const Fixed &other) const;
		bool operator<(const Fixed &other) const;
		bool operator==(const Fixed &other) const;
		bool operator!=(const Fixed &other) const;
		bool operator<=(const Fixed &other) const;
		bool operator>=(const Fixed &other) const;
		
		Fixed operator++();
		Fixed operator++(int);		
		Fixed operator--();
		Fixed operator--(int);

		static Fixed &min(Fixed &first, Fixed &second);
		static const Fixed &min(const Fixed &first, const Fixed &second);

		static Fixed &max(Fixed &first, Fixed &second);
		static const Fixed &max(const Fixed &first, const Fixed &second);
		
};

std::ostream &operator<<(std::ostream &other ,const Fixed &Fixed);

#endif
