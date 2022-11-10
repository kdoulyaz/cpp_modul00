/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdoulyaz <kdoulyaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 18:16:21 by kdoulyaz          #+#    #+#             */
/*   Updated: 2022/11/10 00:27:24 by kdoulyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include"Contact.class.hpp"

class PhoneBook
{
	private:
    	Contact contacts[8];
    	int      index;
	public:
		PhoneBook();
		~PhoneBook();
		void	add_contact();
		void	search_contact();
		void	print_contact(int);
};

#endif