/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:20:25 by aborboll          #+#    #+#             */
/*   Updated: 2021/11/08 10:15:09 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
}

Weapon::Weapon() {}

void	Weapon::setType(std::string type)
{
	this->type = type;
}

std::string const & Weapon::getType(void) const
{
	return (this->type);
}

Weapon::~Weapon()
{
	std::cout << "\"" << this->type << "\"" << " weapon does not exists anymore." << std::endl;
}

