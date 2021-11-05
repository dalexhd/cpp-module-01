/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:18:44 by aborboll          #+#    #+#             */
/*   Updated: 2021/11/04 18:25:02 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Incluimos las librerias esenciales.
*/
#include <iostream>
#include <string.h>

class Weapon
{
	private:
		std::string	type;
	public:
		Weapon();
		std::string	getType(void);
		void		setType(std::string name);
		~Weapon();
};
