/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 21:05:32 by yer-retb          #+#    #+#             */
/*   Updated: 2023/03/03 20:11:49 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(){
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name){

	if (grade > 150)
		throw GradeTooLowException();
	if (grade < 1)
		throw GradeTooHighException();
	this->grade = grade;
}

Bureaucrat::~Bureaucrat(){
}

Bureaucrat::Bureaucrat(Bureaucrat const &other){
	*this =	other;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &other)
{
	this->grade = other.grade;
	return(*this);
}

std::string Bureaucrat::getName(void) const {
	return(this->name);
}

int Bureaucrat::getGrade(void) const {
	return(this->grade);
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return("Low Grade\n");
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
	return("High Grade\n");
}

void Bureaucrat::increment(void){
	this->grade--;
	if (this->grade < 1)
		throw GradeTooHighException();
}

void Bureaucrat::decrement(void){
	this->grade++;
	if (this->grade < 1)
		throw GradeTooLowException();
}

void Bureaucrat::signForm(Form a)
{
	if(a.get_sign() == true)
		std::cout << name << " signed " << a.get_name() << std::endl;
	else
		std::cout << name << " couldn't sign " << a.get_name() << " because "<< grade << " is too low"<< std::endl;
}

std::ostream &operator<<(std::ostream &first, const Bureaucrat &second)
{
	first << second.getName() << " , bureaucrat grade " << second.getGrade();
	return (first);
}
