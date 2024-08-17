/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lps <lps@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 12:04:32 by lps               #+#    #+#             */
/*   Updated: 2024/08/17 14:58:34 by lps              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Contacts	add_new_contact(void)
{
	Contacts	new_contact;
	std::string	info;

	std::cout << "First name: ";
	getline(std::cin, info);
	new_contact.set_first_name(info);
	std::cout << "Last name: ";
	getline(std::cin, info);
	new_contact.set_last_name(info);
	std::cout  << "Nickname: ";
	getline(std::cin, info);
	new_contact.set_nickname(info);
	std::cout<< "Phone number: ";
	getline(std::cin, info);
	new_contact.set_phone_number(info);
	std::cout  << "Darkest secret: " ;
	getline(std::cin, info);
	new_contact.set_darkest_secret(info);
	return (new_contact);
}
