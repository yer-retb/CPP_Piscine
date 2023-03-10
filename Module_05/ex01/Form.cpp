/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 01:42:33 by yer-retb          #+#    #+#             */
/*   Updated: 2023/03/05 19:08:06 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Form.hpp"
#include "Bureaucrat.hpp"

void Form::beSigned(Bureaucrat a)
{
	if(a.getGrade() > grade_sign)
		throw GradeTooLowException();
	sign = true;
}

Form::Form() : name("Default"),grade_sign(0),grade_execute(0){
	sign = false;
}

Form::Form(std::string const name, int grade_sign, int grade_execute) : name(name),grade_sign(grade_sign),grade_execute(grade_execute){
	sign = false;
}

Form::Form(Form const &other) : name(other.name), grade_sign(other.grade_sign), grade_execute(other.grade_execute) {
	this->sign = other.sign; 
}

Form &Form::operator=(Form const &other) {
	
	this->sign = other.sign;
	return *this;
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
	return("Form High Grade\n");
}