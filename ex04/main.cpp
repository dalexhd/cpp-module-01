/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:28:31 by aborboll          #+#    #+#             */
/*   Updated: 2021/11/09 18:25:32 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string str_replace(std::string str, std::string search, std::string replace)
{
	std::string	res;

	for (size_t i = 0; i < str.length(); i++)
	{
		for (size_t x = 0; x < search.length(); x++)
		{
			if (str[i] != search[x])
			{
				if (i < str.length())
					res += str[i];
				break;
			}
			else if (str[i] == search[x] && x + 1 == search.length())
			{
				res = res.substr(0, i - search.length() + 1) + replace;
				break ;
			}
			res += str[i];
			i++;
		}
	}
	return (res);
}

int main(int argc, char **argv)
{
	std::ifstream in_stream;
	std::ofstream out_stream;
	std::string content;
	std::string str;

	if (argc < 3)
	{
		std::cout << "Please enter the following args: ./replace \"[File Name]\" \"[wanted str to replace]\" \"[replacing str]\"" << std::endl;
		return (-1);
	}
	in_stream.open(argv[1]);
	if (in_stream.fail())
	{
		std::cout << "Could not open " << argv[1] << " file." << std::endl;;
		return (-1);
	}
	while (std::getline(in_stream, str))
	{
		content += str_replace(str, argv[2], argv[3]);
		content.push_back('\n');
	}
	out_stream.open(std::string(argv[1]) + ".example");
	if (out_stream.fail())
	{
		std::cout << "Could not open file " << std::string(argv[1]) + ".example" << "" << std::endl;
		return (-1);
	}
	out_stream << content << std::endl;
	out_stream.close();
	in_stream.close();
	return (0);
}

