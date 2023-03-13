/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 01:07:21 by yer-retb          #+#    #+#             */
/*   Updated: 2023/03/06 21:00:11 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("Default") {
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target){
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & other) : AForm("RobotomyRequestForm", 72, 45), _target(other._target){
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & other) {
	_target = other._target;
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const{
	
	if (executor.getGrade() <= this->get_grade_exe() && this->get_sign())
		std::cout << _target << " as been robotomized successfully 50% of the time" << std::endl;
	else
	{
		std::cout << "the robotomy failed" << std::endl; 
		throw AForm::GradeTooLowException();
	}
}
