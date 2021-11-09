/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:29:54 by aborboll          #+#    #+#             */
/*   Updated: 2021/11/09 19:52:07 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{
}

void	Karen::debug()
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::info()
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error()
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

/**
 * Doc url: https://stackoverflow.com/a/2402607
 *
*/
void	Karen::complain(std::string level)
{
	std::string	names[4] = {"debug", "info", "warning", "error"};
	void	(Karen::*members[4])() = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};

	for (size_t i = 0; i < 4; i++)
	{
		if (names[i].compare(level) == 0)
		{
			(this->*members[i])();
			break ;
		}
	}
}

Karen::~Karen()
{
}
