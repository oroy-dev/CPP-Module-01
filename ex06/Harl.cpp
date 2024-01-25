/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olivierroy <olivierroy@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:23:15 by olivierroy        #+#    #+#             */
/*   Updated: 2024/01/25 00:20:46 by olivierroy       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << std::endl;
    std::cout << "Harl created" << std::endl;
	std::cout << std::endl;
    _f[0] = &Harl::debug;
    _f[1] = &Harl::info;
    _f[2] = &Harl::warning;
    _f[3] = &Harl::error;
    _f[4] = &Harl::whatever;
    _levels[0] = "DEBUG";
    _levels[1] = "INFO";
    _levels[2] = "WARNING";
    _levels[3] = "ERROR";
    return ;
}

Harl::~Harl(void)
{
	std::cout << std::endl;
    std::cout << "Harl destroyed" << std::endl;
	std::cout << std::endl;
    return ;
}

void    Harl::debug(void)
{
    std::cout << "\033[1;34m[DEBUG]\033[0m		";
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}

void    Harl::info(void)
{
    std::cout << "\033[1;32m[INFO]\033[0m		";
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "\033[1;33m[WARNING]\033[0m	";
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error(void)
{
    std::cout << "\033[1;31m[ERROR]\033[0m		";
    std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void	Harl::whatever(void)
{
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void    Harl::complain(std::string level)
{
	int	switch_on = 0;
	int	i = 0;

	while (i < 4)
	{
		if (_levels[i] == level || switch_on)
		{
			switch_on = 1;
			(this->*_f[i])();
		}
		i++;
	}
	if (!switch_on)
		(this->*_f[4])();
}
