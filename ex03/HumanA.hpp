/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:20:35 by aborboll          #+#    #+#             */
/*   Updated: 2021/11/05 19:24:46 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

#include <ostream>

class HumanA
{
	private:
		std::string	name;
		Weapon	weapon;
	public:
		HumanA(std::string name, Weapon weapon);
		void	attack(void);
		~HumanA();
};

std::ostream  & operator<< ( std::ostream & o, const HumanA & obj);
#endif
