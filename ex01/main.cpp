/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdoulyaz <kdoulyaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:24:29 by kdoulyaz          #+#    #+#             */
/*   Updated: 2022/11/10 00:59:40 by kdoulyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook()
{
    this->index = 0;
}

PhoneBook::~PhoneBook()
{
}

void		Contact::set_first_name(std::string f_name)
{
	if (f_name.length() > 10)
		f_name = f_name.substr(0, 9) + ".";
	this->first_name = f_name;
	return ;
}

std::string	Contact::get_first_name()
{
	return (this->first_name);
}

void		Contact::set_last_name(std::string l_name)
{
	if (l_name.length() > 10)
		l_name = l_name.substr(0, 9) + ".";
	this->last_name = l_name;
	return ;
}

std::string	Contact::get_last_name()
{
	return (this->last_name);
}

void		Contact::set_nickname(std::string n_name)
{
	if (n_name.length() > 10)
		n_name = n_name.substr(0, 9) + ".";
	this->nickname = n_name;
	return ;
}

std::string	Contact::get_nickname()
{
	return (this->nickname);
}

void		Contact::set_phone_number(std::string p_number)
{
	if (p_number.length() > 10)
		p_number = p_number.substr(0, 9) + ".";
	this->phone_num = p_number;
	return ;
}

std::string	Contact::get_phone_number()
{
	return (this->phone_num);
}

void		Contact::set_darkest_secret(std::string d_secret)
{
	if (d_secret.length() > 10)
		d_secret = d_secret.substr(0, 9) + ".";
	this->darkest_secret = d_secret;
	return ;
}

std::string	Contact::get_darkest_secret()
{
	return (this->darkest_secret);
}

void PhoneBook::add_contact()
{
	std::string	tmp;
	
	std::cout << "first name: ";
	getline(std::cin, tmp);
	contacts[this->index].set_first_name(tmp);
	std::cout << "last name: ";
	getline(std::cin, tmp);
	contacts[this->index].set_last_name(tmp);
	std::cout << "nickname: ";
	getline(std::cin, tmp);
	contacts[this->index].set_nickname(tmp);
	std::cout << "phone number: ";
	getline(std::cin, tmp);
	contacts[this->index].set_phone_number(tmp);
	std::cout << " darkest secret: ";
	getline(std::cin, tmp);
	contacts[this->index].set_darkest_secret(tmp);
	this->index++;
}

void	Contact::print_contact(int index)
{
	for (int i = 0; i < index; i++){
		std::cout << "|";
		std::cout <<std::setfill(' ') << std::setw(10) << i + 1;
		std::cout << "|";
		std::cout <<std::setfill(' ') << std::setw(10) << contacts[i].get_first_name();
		std::cout << "|";
		std::cout <<std::setfill(' ') << std::setw(10) << coget_last_name();
		std::cout << "|";
		std::cout <<std::setfill(' ') << std::setw(10) << get_nickname();
		std::cout << "|";
		std::cout <<std::setfill(' ') << std::setw(10) << get_phone_number();
		std::cout << "|" << std::endl;
	}
}

void	PhoneBook::search_contact()
{
	Contact contact;
	if (this->index == 0)
    	std::cout << "empy contact" << std::endl;
	else
	{
		std::cout << "|";
		std::cout <<std::setfill(' ') << std::setw(10) << "index";
		std::cout << "|";
		std::cout <<std::setfill(' ') << std::setw(10) << "first_name";
		std::cout << "|";
		std::cout <<std::setfill(' ') << std::setw(10) << "last_name";
		std::cout << "|";
		std::cout <<std::setfill(' ') << std::setw(10) << "nickname";
		std::cout << "|";
		std::cout <<std::setfill(' ') << std::setw(10) << "Phone_num";
		std::cout << "|" << std::endl;
		contact.print_contact(this->index);
	}
	return ;
}

int main ()
{
	PhoneBook	phonebook;
	std::string	input;

	std::cout << "Enter a commande\n";
	getline(std::cin, input);
	while (input != "EXIT")
	{
		if (std::cin.eof())
			break ;
		if (input == "ADD")
			phonebook.add_contact();
		else if (input == "SEARCH")
			phonebook.search_contact();
		else
			std::cout << "Invalid commande\n";
		std::cout << "Enter a commande\n";
		getline(std::cin, input);
	}
	return (0);
}
