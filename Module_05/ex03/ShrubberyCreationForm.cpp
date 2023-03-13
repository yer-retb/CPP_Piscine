/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 01:07:24 by yer-retb          #+#    #+#             */
/*   Updated: 2023/03/05 19:23:27 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("Default") {
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target){
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & other) : AForm("ShrubberyCreationForm", 145, 137), _target(other._target){
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & other) {
	_target = other._target;
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
	
	if (executor.getGrade() <= this->get_grade_exe() && this->get_sign())
	{
		std::ofstream outfile;
		outfile.open(_target + "_shrubbery", std::ios::out);
		outfile << "          	 /\\ " << std::endl;
		outfile << "            <  > " << std::endl;
		outfile << "             \\/ " << std::endl;
		outfile << "             /\\ " << std::endl;
		outfile << "            /  \\ " << std::endl;
		outfile << "           /++++\\ " << std::endl;
		outfile << "          /  ()  \\ " << std::endl;
		outfile << "          /      \\ " << std::endl;
		outfile << "         /~`~`~`~`\\ " << std::endl;
		outfile << "        /  ()  ()  \\ " << std::endl;
		outfile << "        /          \\ " << std::endl;
		outfile << "       /&*&*&*&*&*&*\\ " << std::endl;
		outfile << "      /  ()  ()  ()  \\ " << std::endl;
		outfile << "      /              \\ " << std::endl;
		outfile << "     /++++++++++++++++\\ " << std::endl;
		outfile << "    /  ()  ()  ()  ()  \\ " << std::endl;
		outfile << "    /                  \\ " << std::endl;
		outfile << "   /~`~`~`~`~`~`~`~`~`~`\\ " << std::endl;
		outfile << "  /  ()  ()  ()  ()  ()  \\ " << std::endl;
		outfile << "  /&*&*&*&*&*&*&*&*&*&*&*\\ " << std::endl;
		outfile << " /                        \\ " << std::endl;
		outfile << "/,.,.,.,.,.,.,.,.,.,.,.,.,.\\ " << std::endl;
		outfile << "           |   | " << std::endl;
		outfile << "          |`````| " << std::endl;
		outfile << "          \\_____/ " << std::endl;
		outfile.close();
	}
	else
		throw GradeTooLowException();
}