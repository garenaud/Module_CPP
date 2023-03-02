/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 16:39:18 by grenaud-          #+#    #+#             */
/*   Updated: 2023/03/02 15:49:27 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class	Contact
{
	public:
		Contact();
		~Contact();

		Contact(std::string first_name, std::string last_name, std::string phone_number, 
			std::string nickname, std::string darkest_secret);
		Contact	add(Contact contact);
		int		isnull(Contact contact);
		void	display_full(Contact contact);
		void	print(Contact contact, int i);
		
	private:
		std::string first_name;
		std::string last_name;
		std::string phone_number;
		std::string nickname;
		std::string darkest_secret;
};

#endif