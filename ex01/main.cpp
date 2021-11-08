/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:39:07 by aborboll          #+#    #+#             */
/*   Updated: 2021/11/08 10:45:36 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *zombie;

	zombie = zombieHorde(6, "zombie");
	if (!zombie)
		return (-1);
	delete[] zombie;
	return (0);
}
