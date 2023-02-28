/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 20:21:47 by yer-retb          #+#    #+#             */
/*   Updated: 2023/02/28 02:21:43 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "default constructor call" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) {
	std::cout << "constructor call" << std::endl;
	this->type = type;
}

WrongAnimal::WrongAnimal(WrongAnimal const &other){
	std::cout << "Copy constructor call" << std::endl;
	*this = other;
}

WrongAnimal::~WrongAnimal (){
	std::cout << "destructor call" << std::endl;
}

WrongAnimal &WrongAnimal::operator= (WrongAnimal const &rhs) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->type = rhs.type;
	return (*this);
}

void WrongAnimal::makeSound (void) const {
	std::cout << "WrongAnimal make sound" << std::endl;
}

std::string WrongAnimal::getType(void) const{
	return (this->type);
}