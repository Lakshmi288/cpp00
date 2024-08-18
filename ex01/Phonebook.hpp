/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lps <lps@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 12:04:18 by lps               #+#    #+#             */
/*   Updated: 2024/08/18 11:21:40 by lps              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSPHONEBOOK_HPP
# define CLASSPHONEBOOK_HPP

# include "Contacts.hpp"
//used to control the format and alignment of numerical output in C++.
# include <iomanip>
# include <iostream>
# include <string>	

class Phonebook
{
  public:
  // constructor for the Phonebook class. The constructor is a special function that is called when an object of the class is created.
	Phonebook(void);
	~Phonebook(void);
	//Declares an array of 8 Contacts objects. This means the Phonebook class can store up to 8 contacts. 
	Contacts contact[8];
};

//main.cpp

int			main(void);
std::string print_welcome_message(std::string command);

//add.cpp

Contacts	add_new_contact(void);

//search.cpp

void		show_all_contacts(Contacts contact[8], int num_contacts);
void		choose_contact(Contacts contact[8], int num_contacts);
void		print_contacts(int id, std::string first_name,
				std::string last_name, std::string nickname);
std::string trim(std::string info);

#endif
