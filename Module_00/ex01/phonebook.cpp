/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:04:26 by grenaud-          #+#    #+#             */
/*   Updated: 2023/03/02 17:34:29 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook(void)
{
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

std::string	add_i(std::string msg)
{
	std::string dest;
	std::cout << msg;
	while(42)
	{
		std::getline(std::cin, dest);
		if (dest.empty() > 0)
			break;
	}
	std::cout << dest;
	return (dest);
}

PhoneBook PhoneBook::add_info(PhoneBook pb, int i)
{
	Contact	New_Contact(add_i("first name:"), add_i("last name:"), add_i("phone number:"), 
						add_i("nickname:"), add_i("darkest secret:"));
	pb.contacts[i] = New_Contact;
	return (pb);
}

void	display(PhoneBook pb)
{
	std::cout << 
}