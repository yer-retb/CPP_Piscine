/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 20:49:33 by yer-retb          #+#    #+#             */
/*   Updated: 2023/03/12 20:37:23 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>

class Base
{
	public:
	 	virtual ~Base();
};

class A : public Base
{

};

class B : public Base
{

};

class C : public Base
{

};


Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif