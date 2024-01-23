/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 16:57:49 by oroy              #+#    #+#             */
/*   Updated: 2024/01/22 20:13:19 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(void)
{
	std::cout << HUMANB_TEXT << "Nameless Human B created, so we'll call him Joe." << std::endl;
	this->name = "Joe";
	return ;
}

HumanB::HumanB(std::string name) : name(name)
{
	std::cout << HUMANB_TEXT << this->name << " created | Equipment: Nothing" << std::endl;
	return ;
}

HumanB::~HumanB(void)
{
	std::cout << HUMANB_TEXT << this->name << " destroyed" << std::endl;
	return ;
}

void	HumanB::attack(void)
{
	std::cout << HUMANB_TEXT << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
