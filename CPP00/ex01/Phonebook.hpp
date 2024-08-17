/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhonebook.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lps <lps@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 12:04:18 by lps               #+#    #+#             */
/*   Updated: 2024/08/17 14:57:28 by lps              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSPHONEBOOK_HPP
# define CLASSPHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "Contacts.hpp"


class Phonebook
{
	public:

		Phonebook(void);
		~Phonebook(void);

		Contacts	contact[8];
};

/*
** main.cpp
*/
int			main(void);
std::string	print_welcome_message(std::string command);

/*
** add.cpp
*/
Contacts	add_new_contact(void);

/*
** search.cpp
*/
void		show_all_contacts(Contacts contact[8], int num_contacts);
void		choose_contact(Contacts contact[8], int num_contacts);
void		print_contacts(int id, std::string first_name,
				std::string last_name, std::string nickname);
std::string	trim(std::string info);

#endif
