/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 14:48:19 by grenaud-          #+#    #+#             */
/*   Updated: 2023/03/02 15:50:19 by grenaud-         ###   ########.fr       */
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

/* int		contact.isnull(Contact contact)
{
	if (contact.first_name.empty())
		return (1);
	return (0);
} */

