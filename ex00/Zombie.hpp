/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 18:11:15 by aborboll          #+#    #+#             */
/*   Updated: 2021/11/03 18:01:36 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Incluimos las librerias esenciales.
*/
#include <iostream>
#include <string.h>

class Zombie
{
	private:
		std::string	name;
	public:
		Zombie();
		void	setName(std::string name);
		void	announce(void);
		~Zombie();
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);
