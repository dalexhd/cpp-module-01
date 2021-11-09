/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:30:01 by aborboll          #+#    #+#             */
/*   Updated: 2021/11/09 21:50:07 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char **argv)
{
	Karen karen;

	if (argc < 2 || argc > 2)
	{
		std::cout << "Error: usage ./karen [DEBUG|INFO|WARNING|ERROR|%s]" << std::endl;
		return (-1);
	}
	karen.complain(karen.resolve(argv[1]));
	return (0);
}

