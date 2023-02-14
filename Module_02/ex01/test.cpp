/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 18:09:41 by yer-retb          #+#    #+#             */
/*   Updated: 2023/02/14 01:37:28 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

struct test
{
	float x, y;

	test (float x, float y) : x(x) , y(y) {};

	test add (const test &other) const
	{
		return test (x + other.x , y + other.y);
	}
	
	test operator+(const test&other) const
	{
		return (add(other));
	}
	
	test mult (const test &other) const
	{
		return test (x * other.x , y * other.y);
	}
	
	test operator*(const test&other) const
	{
		return (mult(other));
	}
};

std::ostream& operator<< (std::ostream &tst, const test &other)
{
	tst << other.x << " , " << other.y;
	return (tst);
}

int main()
{
	test pos (4.0f, 4.0f);
	test pwr  (0.5f, 1.5f);
	test hight (1.1f, 1.1f);
	
	test _result = pos.add(pwr.mult(hight));
	test result = pos + pwr * hight;

	std::cout << result << std::endl;
}
