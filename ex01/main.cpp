/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lps <lps@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 12:05:04 by lps               #+#    #+#             */
/*   Updated: 2024/08/17 15:02:06 by lps              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	main(void)
{
	Phonebook	phonebook;
	int			i;
	int			num_contacts;

	std::string command;
	command = print_welcome_message(command);
	i = 0;
	num_contacts = 0;
	while (command != "EXIT" && command != "exit")
	{
		if (command == "ADD" || command == "add")
		{
			if (i == 8)
				i = 0;
			phonebook.contact[i] = add_new_contact();
			i++;
			if (num_contacts < 8)
				num_contacts++;
		}
		else if (command == "SEARCH" || command == "search")
		{
			if (num_contacts > 0)
			{
				show_all_contacts(phonebook.contact, num_contacts);
				choose_contact(phonebook.contact, num_contacts);
			}
			else
				std::cout << "Empty phonebook" << std::endl;
		}
		else
			std::cout
				<< "Invalid command" << std::endl;
		std::cout
			<< "Type your command: ";
		getline(std::cin, command);
	}
	std::cout
		<< "See you Again" << std::endl;
	return (0);
}

std::string print_welcome_message(std::string command)
{
	std::cout
		<< " Welcome to Phonebook" << std::endl;
	std::cout << "Enter any command. (ADD, SEARCH OR EXIT) : ";
	getline(std::cin, command);
	return (command);
}
