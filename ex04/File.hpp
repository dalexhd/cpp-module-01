/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:20:35 by aborboll          #+#    #+#             */
/*   Updated: 2021/11/08 18:28:49 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

#ifndef FILE_HPP
# define FILE_HPP

class File
{
	private:
		std::string	name;
	public:
		std::iostream	file;
		~File();
};

#endif
