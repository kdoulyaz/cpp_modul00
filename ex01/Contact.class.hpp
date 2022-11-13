/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdoulyaz <kdoulyaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:42:46 by kdoulyaz          #+#    #+#             */
/*   Updated: 2022/11/11 23:45:10 by kdoulyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include<iostream>
#include<string>
#include<random>
#include <iomanip>

class Contact{
    private:
        std::string	first_name;
        std::string	last_name;
        std::string	nickname;
        std::string	phone_num;
        std::string	darkest_secret;
    public:
        void		set_first_name(std::string first_name);
        void		set_last_name(std::string first_name);
        void		set_nickname(std::string nickname);
        void		set_phone_number(std::string phonenumber);
        void		set_darkest_secret(std::string darkest_secret);
        std::string	get_first_name();
        std::string	get_last_name();
        std::string	get_nickname();
        std::string	get_phone_number();
        std::string	get_darkest_secret();
};

#endif