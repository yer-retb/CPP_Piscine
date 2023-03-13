/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 02:09:11 by yer-retb          #+#    #+#             */
/*   Updated: 2023/03/13 11:19:45 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{

    int Arr[] = {1,2,3,4,5};

    iter(Arr, 3, function);

    std::string Str[] = {"hello", "world", "how", "are", "you"};

    iter(Str, sizeof(Str)/sizeof(Str[0]), function);

    double Doub[] = {1.2,2.3,3.4,4.5,5.6};

    iter(Doub, 2, function);

}

// #include "iter.hpp"

// class Awesome
// {
//     public:
//     	Awesome( void ) : _n( 42 ) { return; }
//   		int get( void ) const { return this->_n; }
//     private:
//     	int _n;
// };
// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

// template< typename T >
// void print( T const& x ) { std::cout << x << std::endl; return; }

// int main() {
//     int tab[] = { 0, 1, 2, 3, 4 }; 
// 	Awesome tab2[5];

//     iter(tab, 5, print);
//     iter(tab2, 5, print);
//     return 0;
// }