/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 21:08:06 by yer-retb          #+#    #+#             */
/*   Updated: 2023/03/06 22:29:20 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main(void)
{
	try
	{
		Bureaucrat B("dokkaebi", 4);
		PresidentialPardonForm a("contrat");
		a.beSigned(B);
		B.signForm(a);
		B.executeForm(a);
		a.execute(B);
		std::cout << B << std::endl;
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	};
}
