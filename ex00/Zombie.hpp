/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 18:11:15 by aborboll          #+#    #+#             */
/*   Updated: 2021/11/02 17:57:37 by aborboll         ###   ########.fr       */
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
		void	announce(void) const;
		void	randomChump(std::string name);
		Zombie*	newZombie(std::string name);
		~Zombie();
		Zombie(std::string name);
};
