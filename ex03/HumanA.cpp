/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:20:39 by aborboll          #+#    #+#             */
/*   Updated: 2021/11/08 10:04:48 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
	this->name = name;
	this->weapon = &weapon;
}

void	HumanA::attack()
{
	std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}

HumanA::~HumanA()
{
	std::cout << this->name + " human deleted." << std::endl;
}
