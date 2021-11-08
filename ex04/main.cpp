/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:28:31 by aborboll          #+#    #+#             */
/*   Updated: 2021/11/08 18:57:50 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

std::string	str_replace(std::string str, std::string replace)
{
	std::string	res;
	bool		isIn;

	isIn = false;
	for (size_t i = 0; i < str.length(); i++)
	{
		if (isIn && str[i] === replace)
		printf("%c\n", str[i]);
	}
	return (str);
}

int main(int argc, char **argv)
{
	std::ifstream	in_stream;
	std::string		content;
	std::string		str;

	if (argc < 3)
	{
		std::cout << "Please enter the following args: ./replace \"[File Name]\" \"[wanted str to replace]\" \"[replacing str]\"\n";
		return (-1);
	}
	in_stream.open(argv[1]);
	if (in_stream.fail())
	{
		std::cout << "Could not open file " << argv[1] << ".\n";
		return (-1);
	}
	while (std::getline(in_stream, str))
	{
		content += str_replace(str, argv[2]);
		content.push_back('\n');
	}
	return (0);
    //.....the rest of the text goes beneath......
}
