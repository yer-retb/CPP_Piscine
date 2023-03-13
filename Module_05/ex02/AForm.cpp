/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 01:42:33 by yer-retb          #+#    #+#             */
/*   Updated: 2023/03/05 19:08:17 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AForm.hpp"
#include "Bureaucrat.hpp"

void AForm::beSigned(Bureaucrat a)
{
	if(a.getGrade() > grade_sign)
		throw GradeTooLowException();
	sign = true;
}

AForm::AForm() : name("Default"),grade_sign(0),grade_execute(0){
	sign = false;
}

AForm::AForm(std::string const name, int grade_sign, int grade_execute) : name(name),grade_sign(grade_sign),grade_execute(grade_execute){
	sign = false;
}

AForm::AForm(AForm const &other) : name(other.name), grade_sign(other.grade_sign), grade_execute(other.grade_execute) {
	this->sign = other.sign; 
}

AForm &AForm::operator=(AForm const &other) {
	
	this->sign = other.sign;
	return *this;
}

AForm::~AForm(){
}

int AForm::get_sign() const{
	return(sign);
}

int AForm::get_grade() const{
	return(grade_sign);
}

int AForm::get_grade_exe() const{
	return(grade_execute);
}

std::string AForm::get_name() const{
	return(name);
}

const char* AForm::GradeTooLowException::what() const throw(){
	return("AForm Low Grade\n");
}

const char* AForm::GradeTooHighException::what() const throw(){
	return("AForm High Grade\n");
}
