/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 10:01:19 by grenaud-          #+#    #+#             */
/*   Updated: 2023/02/15 13:55:52 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1; argv[i]; i++)
		{
			for (int j = 0; argv[i][j]; j++)
				std::cout << (char) toupper(argv[i][j]);
/* 			if (i < argc - 1)
			{
				if (argv[i][0] != ' ' || argv[i][strlen(argv[i])] != ' ')
					std::cout << ' ';
			} */
		}
	}
	std::cout << std::endl;
	return (EXIT_SUCCESS);
}