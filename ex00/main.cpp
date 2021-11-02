/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:39:07 by aborboll          #+#    #+#             */
/*   Updated: 2021/11/02 18:26:19 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie	zombie1("zombie");
	Zombie	*zombie2 = NULL;

	zombie1.newZombie("zombie");
	zombie2->newZombie("zombie");
	delete zombie2;
	return (0);
}
