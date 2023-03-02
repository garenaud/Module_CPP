/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:39:44 by grenaud-          #+#    #+#             */
/*   Updated: 2023/03/02 17:33:20 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main()
{
	std::string	command;
	PhoneBook pb;
	int	i;

	i = 0;
	while(42)
	{
		std::cout << "Type SEARCH to find a contact \nType ADD to add a contact \nType EXIT to quit\n";
		std::getline(std::cin, command);
		command.erase(0, )
		if (command == "EXIT")
			break;
		else if (command == "ADD")
		{
			pb = pb.add_info(pb, i);
		}
		else if (command == "SEARCH")
		{
			std::cout << "feature en attente \n";
			continue;
		}
		else if (command.empty())
		{
			continue ;
		}
	}
}
