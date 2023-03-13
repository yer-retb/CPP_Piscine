/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 18:01:38 by yer-retb          #+#    #+#             */
/*   Updated: 2023/03/13 20:48:30 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
	public :
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		iterator begin(){
			return (this->c.begin());
		}
		iterator end (){
			return (this->c.end());
		}
		const_iterator end () const {
			return (this->c.end());
		}
		const_iterator begin() const {
			return (this->c.begin());
		}
		
		MutantStack() {}
		~MutantStack() {}
		MutantStack(const MutantStack<T> &) {}
		MutantStack<T> &operator=(const MutantStack<T> &)
		{
			return *this;
		}
};

#endif