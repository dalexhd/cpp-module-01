/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:29:57 by aborboll          #+#    #+#             */
/*   Updated: 2021/11/09 19:44:21 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#ifndef KAREN_HPP
# define KAREN_HPP

class Karen
{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	public:
		Karen();
		void complain(std::string level);
		~Karen();
};

#endif
