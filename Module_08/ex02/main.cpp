/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 19:00:36 by yer-retb          #+#    #+#             */
/*   Updated: 2023/05/03 09:14:32 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	
	mstack.push(5);
	mstack.push(17);
	
	std::cout <<"top : "<< mstack.top() << std::endl;
	
	mstack.pop();
	
	std::cout <<"size : "<< mstack.size() << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	// ++it;
	// --it;
	
	while (it != ite)
	{
		std::cout << "val : "<< *it << std::endl;
		++it;
	}
	
	std::stack<int> s(mstack);
	
	return 0;
}

// int main()
// {
//     MutantStack<int> mystack;
//     mystack.push(10);
//     mystack.push(25);
//     mystack.push(78);
//     mystack.push(89);
//     mystack.push(11);
//     mystack.push(63);
//     mystack.push(148);
//     mystack.push(5289);
//     mystack.push(0);


//     std::cout << "top is :" << mystack.top() << std::endl;
//     std::cout << "size is :" << mystack.size() << std::endl;

//     MutantStack<int> ::iterator it = mystack.begin();
//     std::cout <<"begin :" << *it << std::endl;

//     MutantStack<int> ::iterator it2 = mystack.end();
//     *it2--;
//     std::cout <<"end :" << *it2 << std::endl;
//     return(0);
// }
