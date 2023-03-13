/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 01:42:25 by yer-retb          #+#    #+#             */
/*   Updated: 2023/03/06 20:48:36 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include <exception>

class Bureaucrat;

class AForm {

	private :
		const std::string name;
		bool sign;
		const int grade_sign;
		const int grade_execute;

	public :
		AForm();
		AForm(std::string const name, int grade_sign, int grade_execute);
		virtual ~AForm();
		AForm(AForm const &other);
		AForm &operator=(AForm const &other);
		
	class GradeTooHighException : public std::exception {
		const char* what() const throw();
	};
	class GradeTooLowException : public std::exception {
		const char* what() const throw();
	};

	virtual void execute(Bureaucrat const & executor) const = 0;
	void beSigned(Bureaucrat a);
	int get_sign() const;
	int get_grade() const;
	int get_grade_exe() const;
	std::string get_name() const;
};

std::ostream &operator<<(std::ostream &first, const AForm &second);

#endif