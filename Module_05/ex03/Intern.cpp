/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 19:09:24 by yer-retb          #+#    #+#             */
/*   Updated: 2023/03/06 20:19:08 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){
}

Intern::Intern(Intern const & src){
	*this = src;
}

Intern::~Intern(){
}

Intern &Intern::operator=(Intern const & src){
	(void)src;
	return *this;
}

const char* Intern::InternException::what() const throw(){
	return ("InternException");
}

AForm *Intern::makeForm(std::string form, std::string target){
	
	AForm *list;
	int i;

	std::string arr[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};

	for (i = 0; i < 3; i++)
		if (form == arr[i])
			break;
	switch (i)
	{
		case 0 : {
			list = new PresidentialPardonForm(target);
			break;
		}
		case 1 : {
			list = new RobotomyRequestForm(target);
			break;
		}
		case 2 : {
			list = new ShrubberyCreationForm(target);
			break;
		}
		default:
			std::cout << "Intern can't create, "<< form << " not exist " << form << std::endl;
			throw Intern::InternException();
	}
	std::cout << "Intern creates " << form << std::endl;
	return list;
}