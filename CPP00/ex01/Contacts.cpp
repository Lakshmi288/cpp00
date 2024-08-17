/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lps <lps@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 12:04:38 by lps               #+#    #+#             */
/*   Updated: 2024/08/17 14:57:20 by lps              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.hpp"

/*
** constructor
*/

Contacts::Contacts(void)
{
	return ;
}

/*
** destructor
*/

Contacts::~Contacts(void)
{
	return ;
}

/*
** getters and setters
*/

std::string Contacts::get_first_name(void) const
{
	return (this->_first_name);
}

void	Contacts::set_first_name(std::string first_name)
{
	this->_first_name = first_name;
}

std::string Contacts::get_last_name(void) const
{
	return (this->_last_name);
}

void	Contacts::set_last_name(std::string last_name)
{
	this->_last_name = last_name;
}

std::string Contacts::get_nickname(void) const
{
	return (this->_nickname);
}

void	Contacts::set_nickname(std::string nickname)
{
	this->_nickname = nickname;
}

std::string Contacts::get_phone_number(void) const
{
	return (this->_phone_number);
}

void	Contacts::set_phone_number(std::string phone_number)
{
	this->_phone_number = phone_number;
}

std::string Contacts::get_darkest_secret(void) const
{
	return (this->_darkest_secret);
}

void	Contacts::set_darkest_secret(std::string darkest_secret)
{
	this->_darkest_secret = darkest_secret;
}
