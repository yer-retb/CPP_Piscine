/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 03:20:26 by yer-retb          #+#    #+#             */
/*   Updated: 2023/02/26 23:46:51 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:
		Brain *brain;
	public:
		Cat(void);
		Cat(Cat const & other);
		~Cat(void);
		Cat &operator=(Cat const &other);
		void makeSound(void) const;
		
};

#endif