/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:39:44 by grenaud-          #+#    #+#             */
/*   Updated: 2023/03/09 16:42:24 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main()
{
	std::string	command;
	PhoneBook pb;
	int	i;
	int count;

	i = 0;
	count = 0;
	while(42)
	{
		std::cout << "Enter a command (ADD / SEARCH / EXIT): ";
		std::getline(std::cin, command);
		//command.erase(0, );
		if (command == "EXIT")
			break;
		else if (command == "ADD")
		{
			i = pb.check_pb(pb);
			if (i > MAX - 1)
			{
				std::cout << "WARNING! Maximum number of contacts reached, the last one will be removed in order to add the new one. (Y/N):";
				std::getline(std::cin, command);
				if (command == "Y")
				{
 					pb = pb.del_one(pb, count);
					count++;
					if (count > MAX)
						count = 0;
					i = 0;
				}
				else if (command == "N")
					i = -1;
				else
					std::cout << "Invalid command, please try again" << std::endl;
			}
			if (i >= 0)
				pb = pb.add_info(pb, i);
		}
		else if (command == "SEARCH")
			pb.display(pb);
		else if (command.empty())
			continue ;
		else
			std::cout << "Invalid command, please try again" << std::endl;
	}
}
