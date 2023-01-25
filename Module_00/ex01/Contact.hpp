/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 22:58:10 by yer-retb          #+#    #+#             */
/*   Updated: 2023/01/23 16:24:55 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact {
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;

	public:
	void set_first_name(std::string str);
	std::string get_first_name();

	void set_last_name(std::string str);
	std::string get_last_name();

	void set_nickname(std::string str);
	std::string get_nickname();

	void set_phone_number(std::string str);
	std::string get_phone_number();

	void set_darkest_secret(std::string str);
	std::string get_darkest_secret();

};

#endif