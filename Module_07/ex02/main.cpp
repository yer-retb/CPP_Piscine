/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 08:31:00 by yer-retb          #+#    #+#             */
/*   Updated: 2023/03/13 11:17:25 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "Array.hpp"


int main()
{

	Array<int> a(7);

	std::cout << "size : " << a.size() << std::endl;
	try
	{
		a[0] = 1337;
		a[6] = 42;
		a[1] = 55;
		a[4] = 777;
	}
	catch(const std::exception& e)
	{
		std::cerr << "out of Array range !!" << std::endl;
		return ;
	}
	
	for (unsigned int i = 0; i < a.size(); i++)
		std::cout << a[i] << std::endl;
	
}


// #include "Array.hpp"
// #include <iostream>

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }