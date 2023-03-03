/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 21:08:06 by yer-retb          #+#    #+#             */
/*   Updated: 2023/03/02 23:29:41 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main (void)
{
	try{
		Bureaucrat A("ela",10);
		A.increment();
		A.increment();
		A.increment();
		//std::cout << A.getName() << " , bureaucrat grade " << A.getGrade() << std::endl;
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
}
