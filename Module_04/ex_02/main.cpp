/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 02:22:37 by yer-retb          #+#    #+#             */
/*   Updated: 2023/02/28 02:42:31 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	// const Animal* dog = new Dog();
	// const Animal* cat = new Cat();

	// std::cout << dog->getType() << std::endl;
	// std::cout << cat->getType() << std::endl;

	// dog->makeSound();
	// cat->makeSound();
	
	// delete cat;
	// delete dog;
	
	Cat A;
	{
		Cat tmp = A;
	}

	return (0);
}
