/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContacts.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lps <lps@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 12:04:12 by lps               #+#    #+#             */
/*   Updated: 2024/08/17 14:58:10 by lps              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_HPP
# define CONTACTS_HPP

#include <string>

class Contacts
{
	public:

		Contacts(void);
		~Contacts(void);

		std::string	get_first_name(void) const;
		void		set_first_name(std::string first_name);

		std::string	get_last_name(void) const;
		void		set_last_name(std::string last_name);

		std::string	get_nickname(void) const;
		void		set_nickname(std::string nickname);		

		std::string	get_phone_number(void) const;
		void		set_phone_number(std::string phone_number);

		std::string	get_darkest_secret(void) const;
		void		set_darkest_secret(std::string darkest_secret);

	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_darkest_secret;
};

#endif