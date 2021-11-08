/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:15:57 by aborboll          #+#    #+#             */
/*   Updated: 2021/11/08 10:46:29 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *zombieHorde = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		zombieHorde[i].setName(name + "_" + std::to_string(i));
		zombieHorde[i].announce();
	}
	return (&zombieHorde[0]);
}
