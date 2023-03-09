/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 14:48:19 by grenaud-          #+#    #+#             */
/*   Updated: 2023/03/07 15:39:45 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

Contact::Contact(std::string first_name, std::string last_name, std::string phone_number, std::string nickname, std::string darkest_secret)
{
	this->first_name = first_name;
	this->last_name = last_name;
	this->phone_number = phone_number;
	this->nickname = nickname;
	this->darkest_secret = darkest_secret;	
}

int		Contact::isnull(Contact contact)
{
	if (contact.first_name.empty())
		return (1);
	return (0);
}

void	Contact::display_full(Contact contact)
{
	std::cout << "First name: " << contact.first_name << std::endl;
	std::cout << "Last name: " << contact.last_name << std::endl;
	std::cout << "Phone number: " << contact.phone_number << std::endl;
	std::cout << "Nickname: " << contact.nickname << std::endl;
	std::cout << "Darkest secret: " << contact.darkest_secret << std::endl;
} 
void	Contact::print(Contact contact, int i)
{
	if (i == 1)
	{
		if (contact.first_name.size() > 10)
			std::cout << std::string(contact.first_name.begin(), contact.first_name.begin() + 9) << '.';
		else
			std::cout << std::setw(10) << contact.first_name;
	}
	if (i == 2)
	{
		if (contact.last_name.size() > 10)
			std::cout << std::string(contact.last_name.begin(), contact.last_name.begin() + 9) << '.';
		else
			std::cout << std::setw(10) << contact.last_name;
	}
	if (i == 3)
	{
		if (contact.nickname.size() > 10)
			std::cout << std::string(contact.nickname.begin(), contact.nickname.begin() + 9) << '.';
		else
			std::cout << std::setw(10) << contact.nickname;
	}
}