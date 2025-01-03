/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lps <lps@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 12:05:10 by lps               #+#    #+#             */
/*   Updated: 2024/08/17 14:58:56 by lps              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void	show_all_contacts(Contacts contact[8], int num_contacts)
{
	int	i;

	i = 0;
	std::cout
		<< std::setfill(' ') << std::setw(10) << "id"
		<< " | "
		<< std::setfill(' ') << std::setw(10) << "First Name"
		<< " | "
		<< std::setfill(' ') << std::setw(10) << "Last Name"
		<< " | "
		<< std::setfill(' ') << std::setw(10) << "Nickname" << std::endl;
	while (i < num_contacts)
	{
		print_contacts(i + 1, contact[i].get_first_name(),
				contact[i].get_last_name(), contact[i].get_nickname());
		i++;
	}
}

void	choose_contact(Contacts contact[8], int num_contacts)
{
	int	id;

	std::cout << "Choose a contact id to display: ";
	while (!(std::cin >> id) || id < 1 || id > num_contacts)
	{
		std::cout
			<< "Invalid id, choose a valid one: ";
		std::cin.clear();
		std::cin.ignore(10000, '\n');
	}
	id--;
	if (id < num_contacts)
	{
		std::cout
			<< "First name: "
			<< contact[id].get_first_name()
			<< std::endl;
		std::cout
			<< "Last name: "
			<< contact[id].get_last_name()
			<< std::endl;
		std::cout
			<< "Nickname: "
			<< contact[id].get_nickname()
			<< std::endl;
		std::cout
			<< "Phone number: "
			<< contact[id].get_phone_number()
			<< std::endl;
		std::cout
			<< "Darkest secret: "
			<< contact[id].get_darkest_secret()
			<< std::endl;
	}
	std::cin.clear();
	std::cin.ignore(10000, '\n');
}

std::string trim(std::string info)
{
	if (info.length() >= 10)
		info = info.substr(0, 9).append(".");
	return (info);
}

void	print_contacts(int id, std::string first_name, std::string last_name,
		std::string nickname)
{
	std::cout
		<< std::setfill(' ') << std::setw(10) << id << " | "
		<< std::setfill(' ') << std::setw(10) << trim(first_name) << " | "
		<< std::setfill(' ') << std::setw(10) << trim(last_name) << " | "
		<< std::setfill(' ') << std::setw(10) << trim(nickname) << std::endl;
}
