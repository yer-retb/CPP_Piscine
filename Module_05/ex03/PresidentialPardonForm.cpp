/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 22:08:45 by yer-retb          #+#    #+#             */
/*   Updated: 2023/03/05 22:34:38 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), _target("Default"){
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target){
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & other) :  AForm("PresidentialPardonForm", 25, 5), _target(other._target){
}

PresidentialPardonForm::~PresidentialPardonForm(){
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & other){
	_target = other._target;
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const{
	if (executor.getGrade() <= this->get_grade_exe() && this->get_sign())
		std::cout << _target << " has been pardoned by Zafod Beeblebrox" << std::endl;
	else
		throw GradeTooLowException();
}