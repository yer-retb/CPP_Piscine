/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 01:42:33 by yer-retb          #+#    #+#             */
/*   Updated: 2023/03/03 20:09:16 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Form.hpp"
#include "Bureaucrat.hpp"

void Form::beSigned(Bureaucrat a)
{
	if(a.getGrade() > grade_sign)
		throw GradeTooLowException();
	else
		sign = true;
}

Form::Form() : name(0),grade_sign(0),grade_execute(0){
	sign = false;
}

Form::Form(std::string const name, int grade_sign, int grade_execute) : name(name),grade_sign(grade_sign),grade_execute(grade_execute){
	sign = false;
}

Form::~Form(){
}

int Form::get_sign() const{
	return(sign);
}

int Form::get_grade() const{
	return(grade_sign);
}

int Form::get_grade_exe() const{
	return(grade_execute);
}

std::string Form::get_name() const{
	return(name);
}

const char* Form::GradeTooLowException::what() const throw(){
	return("Form Low Grade\n");
}

const char* Form::GradeTooHighException::what() const throw(){
	return("FormHigh Grade\n");
}