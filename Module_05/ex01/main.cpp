/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 21:08:06 by yer-retb          #+#    #+#             */
/*   Updated: 2023/03/03 20:31:49 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main (void)
{

	try{
		Bureaucrat A("ela",190);
		Form B("echo", 7, 6);
		B.beSigned(A);
		A.signForm(B);
		std::cout << A.getName() << " , bureaucrat grade " << A.getGrade() << std::endl;
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
}
