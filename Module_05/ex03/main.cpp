/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 21:08:06 by yer-retb          #+#    #+#             */
/*   Updated: 2023/03/06 22:27:23 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"


int main(void)
{
	try
	{
		Bureaucrat bureaucrat("kanal", 137);
		Intern x;
		AForm * rrf;
	
		rrf = x.makeForm("shrubbery creation", "thatcher");
		rrf->beSigned(bureaucrat);
		bureaucrat.signForm(*rrf);
		rrf->execute(bureaucrat);
		std::cout << bureaucrat << std::endl;
		delete rrf;
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	};
}
