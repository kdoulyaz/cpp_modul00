/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdoulyaz <kdoulyaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:24:29 by kdoulyaz          #+#    #+#             */
/*   Updated: 2022/11/13 17:18:08 by kdoulyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook()
{
    this->index = 0;
	this->x = 0;
}

PhoneBook::~PhoneBook()
{
}

void		Contact::set_first_name(std::string f_name)
{
	this->first_name = f_name;
	return ;
}

std::string	Contact::get_first_name()
{
	return (this->first_name);
}

void		Contact::set_last_name(std::string l_name)
{
	this->last_name = l_name;
	return ;
}

std::string	Contact::get_last_name()
{
	return (this->last_name);
}

void		Contact::set_nickname(std::string n_name)
{
	this->nickname = n_name;
	return ;
}

std::string	Contact::get_nickname()
{
	return (this->nickname);
}

void		Contact::set_phone_number(std::string p_number)
{
	this->phone_num = p_number;
	return ;
}

std::string	Contact::get_phone_number()
{
	return (this->phone_num);
}

std::string	trim_len(std::string str)
{
		if (str.length() > 10)
			str = str.substr(0, 9) + ".";
		return (str);
}

void		Contact::set_darkest_secret(std::string d_secret)
{
	this->darkest_secret = d_secret;
	return ;
}

std::string	Contact::get_darkest_secret()
{
	return (this->darkest_secret);
}

int	num_n_valid(std::string str)
{
	for(std::string::size_type i = 0; i < str.size(); ++i) {
    	if (!isdigit(str[i])){
			std::cout << "Invalid phone number" << std::endl;
			return (1);
		}
	}
	return (0);
}

void PhoneBook::add_contact()
{
	std::string	tmp;
	static int			i = 0;
	static int			x = 0;
	

	std::cout << "first name: ";
	getline(std::cin, tmp);
	contacts[i].set_first_name(tmp);
	std::cout << "last name: ";
	getline(std::cin, tmp);
	contacts[i].set_last_name(tmp);
	std::cout << "nickname: ";
	getline(std::cin, tmp);
	contacts[i].set_nickname(tmp);
	std::cout << "phone number: ";
	getline(std::cin, tmp);
	while (num_n_valid(tmp)){
		std::cout << "phone number: ";
		getline(std::cin, tmp);
	}
	contacts[i].set_phone_number(tmp);
	std::cout << " darkest secret: ";
	getline(std::cin, tmp);
	contacts[i].set_darkest_secret(tmp);
	i++;
	if (x == 0)
		this->index++;
	if (i == 8)
	{
		i = 0;
		x = 1;
	}
}

void	PhoneBook::print_contact(int index)
{
	for (int i = 0; i < index; i++){
		std::cout << "|"
		<<std::setfill(' ') << std::setw(10) << i + 1
		<< "|"
		<<std::setfill(' ') << std::setw(10) << trim_len(contacts[i].get_first_name())
		<< "|"
		<<std::setfill(' ') << std::setw(10) << trim_len(contacts[i].get_last_name())
		<< "|"
		<<std::setfill(' ') << std::setw(10) << trim_len(contacts[i].get_nickname())
		<< "|"
		<<std::setfill(' ') << std::setw(10) << trim_len(contacts[i].get_phone_number())
		<< "|" << std::endl;
	}
}


void	print_head()
{
	std::cout << "|"
		<<std::setfill(' ') << std::setw(10) << "index"
		<< "|"
		<<std::setfill(' ') << std::setw(10) << "first_name"
		<< "|"
		<<std::setfill(' ') << std::setw(10) << "last_name"
		<< "|"
		<<std::setfill(' ') << std::setw(10) << "nickname"
		<< "|"
		<<std::setfill(' ') << std::setw(10) << "Phone_num"
		<< "|"
		<<std::setfill(' ') << std::setw(10) << "dark_sec"
		<< "|" << std::endl;
}

void	PhoneBook::print_one(int one)
{
	std::cout << "first_name: " << contacts[one].get_first_name() << std::endl;
	std::cout << "last_name: " << contacts[one].get_last_name() << std::endl;
	std::cout << "nickname: " << contacts[one].get_nickname() << std::endl;
	std::cout << "phone_number: " << contacts[one].get_phone_number() << std::endl;
	std::cout << "darkest_secret: " << contacts[one].get_darkest_secret() << std::endl;
}

void	PhoneBook::search_contact()
{
	Contact		contact;
	std::string	tmp;
	int			num;
	int n;
	

	if (this->index == 0)
    	std::cout << "empty contact" << std::endl;
	else
	{
		print_head();
		print_contact(this->index);
		std::cout << "enter a number" << std::endl;
		getline(std::cin, tmp);
		n = tmp.length();
		char char_array[n + 1];
		strcpy(char_array, tmp.c_str());
		num = atoi(char_array);
		if (num - 1 >= 0 && num - 1 < this->index)
			print_one(num -1);
		else
			std::cout << "contact doesn't exist" << std::endl;
	}
	return ;
}

void	welcome_prompt()
{
	std::cout << "Hi and WELCOME to the phonebook™" << std::endl
		<< "Use SEARCH to browse your contacts, ADD to add one, "
		<< "and EXIT to... exit" << std::endl
		<< "What may I do for you today? ";
	return ;
}

int main ()
{
	PhoneBook	phonebook;
	std::string	input;

	welcome_prompt();
	getline(std::cin, input);
	while (input != "EXIT")
	{
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
