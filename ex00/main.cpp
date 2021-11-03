/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:39:07 by aborboll          #+#    #+#             */
/*   Updated: 2021/11/03 18:00:45 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie	*zombie;

	zombie = newZombie("Negan");
	zombie->announce();
	randomChump("Glenn");
	delete zombie;
	return (0);
}
