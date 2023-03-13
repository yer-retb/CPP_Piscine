/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 20:20:52 by yer-retb          #+#    #+#             */
/*   Updated: 2023/03/06 00:59:26 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

class AForm;

class Bureaucrat {
	
	private:
		std::string const name;
		int grade ;

	public:
		Bureaucrat ();
		Bureaucrat (std::string name, int grade);
		~Bureaucrat ();
		Bureaucrat (Bureaucrat const &other);
		Bureaucrat &operator=(Bureaucrat const &other);
		class GradeTooLowException : public std::exception{
			const char* what() const throw();
		};
		class GradeTooHighException : public std::exception {
			const char* what() const throw();
		};
		std::string getName(void) const;
		int getGrade(void) const;
		void increment(void);
		void decrement(void);
		void signForm(AForm a);
		void executeForm(AForm const & Aform);
		
};

std::ostream &operator<<(std::ostream &first,const Bureaucrat&second);

#endif