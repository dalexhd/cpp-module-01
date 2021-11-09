/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:29:57 by aborboll          #+#    #+#             */
/*   Updated: 2021/11/09 21:39:24 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#ifndef KAREN_HPP
# define KAREN_HPP

enum Options {
	OTHER,
	DEBUG,
	INFO,
	WARNING,
	ERROR,
};

class Karen
{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		void other(void);
	public:
		Karen();
		Options	resolve(std::string level);
		void	complain(Options level);
		~Karen();
};

#endif
