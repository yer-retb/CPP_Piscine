/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 01:42:25 by yer-retb          #+#    #+#             */
/*   Updated: 2023/03/03 20:31:08 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <exception>

class Bureaucrat;

class Form {

	private :
		const std::string name;
		bool sign;
		const int grade_sign;
		const int grade_execute;

	public :
		Form();
		Form(std::string const name, int grade_sign, int grade_execute);
		~Form();
		
	class GradeTooHighException : public std::exception {
		virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception {
		virtual const char* what() const throw();
	};
	
	void beSigned(Bureaucrat a);
	int get_sign() const;
	int get_grade() const;
	int get_grade_exe() const;
	std::string get_name() const;
};

std::ostream &operator<<(std::ostream &first, const Form &second);

#endif