/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 17:03:12 by grenaud-          #+#    #+#             */
/*   Updated: 2023/03/02 15:49:45 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		int			check_pb(PhoneBook pb);
		PhoneBook	del_one(PhoneBook pb);
		void		display(PhoneBook pb);
		PhoneBook	add_info(PhoneBook pb, int i);

	private:
		Contact contacts[8];
};

#endif