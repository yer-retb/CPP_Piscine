/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tmplate.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 02:23:43 by yer-retb          #+#    #+#             */
/*   Updated: 2023/03/12 02:34:51 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TMPLATE_HPP
# define TMPLATE_HPP

# include <iostream>

template <typename T>
void	swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T max(T a, T b)
{
	if (a > b)
		return (a);
	return (b);
}

template <typename T>
T min(T a, T b)
{
	if (a < b)
		return (a);
	return (b);
}

#endif