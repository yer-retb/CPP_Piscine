/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 02:24:52 by yer-retb          #+#    #+#             */
/*   Updated: 2023/02/24 22:39:10 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string type;

	public:
		Animal();
		Animal(std::string type);
		Animal(Animal const &other);
		virtual ~Animal();
		Animal &operator= (Animal const &other);
		virtual void makeSound (void) const;
		std::string getType(void) const;
};

#endif