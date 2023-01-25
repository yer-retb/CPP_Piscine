/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 22:32:06 by yer-retb          #+#    #+#             */
/*   Updated: 2023/01/22 22:50:58 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

void Contact::set_first_name(std::string str)
{
	this->first_name = str;
}

std::string Contact::get_first_name()
{
	return (this->first_name);
}

void Contact::set_last_name(std::string str)
{
	this->last_name = str;
}

std::string Contact::get_last_name()
{
	return (this->last_name);
}

void Contact::set_nickname(std::string str)
{
	this->nickname = str;
}

std::string Contact::get_nickname()
{
	return (this->nickname);
}

void Contact::set_phone_number(std::string str)
{
	this->phone_number = str;
}

std::string Contact::get_phone_number()
{
	return (this->phone_number);
}

void Contact::set_darkest_secret(std::string str)
{
	this->darkest_secret = str;
}

std::string Contact::get_darkest_secret()
{
	return (this->darkest_secret);
}