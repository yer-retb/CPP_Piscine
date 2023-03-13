/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:38:52 by yer-retb          #+#    #+#             */
/*   Updated: 2023/03/13 20:46:04 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <ctime>
# include "Span.hpp"

int main()
{
	std::vector<int> AB(10, 37);


	Span sp = Span(10);
	try
	{
		// sp.ft_range(AB);
  		sp.addNumber(6);
  		sp.addNumber(3);
  		sp.addNumber(17);
  		sp.addNumber(9);
  		sp.addNumber(11);

		std::cout << "Shortest Span : " << sp.shortestSpan() << std::endl;
  		std::cout << "Longest Span : " << sp.longestSpan() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
		return (0);
	}
}
