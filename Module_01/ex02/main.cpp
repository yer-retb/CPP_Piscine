/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 04:03:12 by yer-retb          #+#    #+#             */
/*   Updated: 2023/02/07 01:44:17 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
	std::string A;
	A = "HI THIS IS BRAIN";
	std::string *stringPTR = &A;
	std::string &stringREF = A;
	

	std::cout << "the memory address of the string A is: " << std::hex << &A << std::endl;
	std::cout << "the memory address held by stringPTR : " << std::hex << stringPTR << std::endl;
	std::cout << "the memory address held by stringREF : " << std::hex << &stringREF << std::endl;


	std::cout << "the value of the string variable A is: " << A << std::endl;
	std::cout << "the value pointed to by stringPTR is : " << *stringPTR << std::endl;
	std::cout << "the value pointed to by stringPTR is : " << stringREF << std::endl;
}
