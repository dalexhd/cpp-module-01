/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 18:11:15 by aborboll          #+#    #+#             */
/*   Updated: 2021/11/03 19:17:35 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Incluimos las librerias esenciales.
*/
#include <iostream>
#include <string.h>


#ifndef MAX_ZOMBIES
	#define MAX_ZOMBIES 100
#endif

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

Zombie* zombieHorde(int N, std::string name);
