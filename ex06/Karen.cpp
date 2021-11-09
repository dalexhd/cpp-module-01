/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:29:54 by aborboll          #+#    #+#             */
/*   Updated: 2021/11/09 21:48:32 by aborboll         ###   ########.fr       */
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

void	Karen::other()
{
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}


void	Karen::complain(Options level)
{
	switch (level)
	{
		case DEBUG:
			this->debug();
			this->info();
			this->warning();
			this->error();
			break;
		case INFO:
			this->info();
			this->warning();
			this->error();
			break;
		case WARNING:
			this->warning();
			this->error();
			break;
		case ERROR:
			this->error();
			break;
		default:
			this->other();
			break;
	}
}

Options	Karen::resolve(std::string level)
{
	Options	keys[4] = {DEBUG, INFO, WARNING, ERROR};
	std::string	names[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (size_t i = 0; i < 8; i++)
	{
		if (names[i].compare(level) == 0)
		{
			std::cout << "[ " << level << " ]" << std::endl;
			return (keys[i]);
		}
	}
	return (OTHER);
}

Karen::~Karen()
{
}
