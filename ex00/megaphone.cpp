/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdoulyaz <kdoulyaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:18:42 by kdoulyaz          #+#    #+#             */
/*   Updated: 2022/11/05 14:00:24 by kdoulyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

void	mega_phone(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
	return ;
}

int	main(int ac, char **av)
{
    int	i;

	i = 0;
	while (av[++i])
	{
		mega_phone(av[i]);
		std :: cout << av[i];
	}
	std :: cout << std :: endl;
	return (0);
}
