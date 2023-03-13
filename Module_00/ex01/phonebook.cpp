/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:04:26 by grenaud-          #+#    #+#             */
/*   Updated: 2023/03/09 16:50:29 by grenaud-         ###   ########.fr       */
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
		if (dest.empty())
			std::cout << "Empty fields are not valid! Please enter something" << std::endl << msg;
		else
			break;
	}
	return (dest);
}

int	PhoneBook::check_pb(PhoneBook pb)
{
	int	i;

	i = 0;
	while(i < 8)
	{
		if (pb.contacts[i].isnull(pb.contacts[i]))
			break;
		i++;
	}
	return (i);
}

int	isnum(std::string s, int i)
{
	if (s.size() != 1)
		return (0);
	if (48 <= s[0] && s[0] <= 48 + i)
		return (1);
	return (0);
}

PhoneBook	PhoneBook::del_one(PhoneBook pb, int count)
{
	int	i;

	i = count;
	std::cout << count << std::endl;
	while (i > 0)
	{
		pb.contacts[i] = pb.contacts[i - 1];
		i--;
	}
	return (pb);
}

PhoneBook 	PhoneBook::add_info(PhoneBook pb, int i)
{
	Contact	New_Contact(add_i("first name:"), add_i("last name:"), add_i("phone number:"), 
						add_i("nickname:"), add_i("darkest secret:"));
	pb.contacts[i] = New_Contact;
	return (pb);
}

void	PhoneBook::display(PhoneBook pb)
{
	int i;
	int	max;
	std::string	index;

	i = 0;
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|" << "First name|" << " Last name|" << "  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
 	while (i < 8)
	{
		if (pb.contacts[i].isnull(pb.contacts[i]))
			break;
		std::cout << "|" << std::setw(10) << i << "|";
		contacts[i].print(contacts[i], 1);
		std::cout << "|";
		contacts[i].print(contacts[i], 2);
		std::cout << "|";
		contacts[i].print(contacts[i], 3);
		std::cout << "|" << std::endl;
		std::cout << "|-------------------------------------------|" << std::endl;
		i++;
	}
	max = i - 1;
	while(42)
	{
		std::cout << "Type the index to have more informations about a contact" << std::endl;
		std::getline(std::cin, index);
		if (index.empty())
			continue;
		if (isnum(index, max))
			i = (int)index[0] - 48;
		else
		{
			std::cout << "enter a valid index" << std::endl;
			continue;
		}
		pb.contacts[i].display_full(pb.contacts[i]);
		break;
	}
}
