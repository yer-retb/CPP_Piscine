/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 20:21:49 by yer-retb          #+#    #+#             */
/*   Updated: 2023/02/28 02:22:09 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "WrongCat default constructor call" << std::endl;
}

WrongCat::WrongCat(std::string type) {
	std::cout << "WrongCat constructor call" << std::endl;
	this->type = type;
}

WrongCat::WrongCat(WrongCat const & other) {
	std::cout << "WrongCat constructor call" << std::endl;
	*this = other;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor call" << std::endl;
}

WrongCat &WrongCat::operator= (WrongCat const & other) {
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	this->type = other.type;
	return (*this);
}

void WrongCat::makeSound (void) const {
	std::cout << "WrongCat make sound : meow" << std::endl;
}
