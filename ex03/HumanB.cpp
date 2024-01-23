/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 16:57:49 by oroy              #+#    #+#             */
/*   Updated: 2024/01/23 12:24:10 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(void)
{
	std::cout << HUMANB_TEXT << "Nameless Human B created, so we'll call him Joe." << std::endl;
	this->name = "Joe";
	this->weapon = nullptr;
	return ;
}

HumanB::HumanB(std::string name) : name(name)
{
	std::cout << HUMANB_TEXT << this->name << " created | Equipment: No weapon" << std::endl;
	this->weapon = nullptr;
	return ;
}

HumanB::~HumanB(void)
{
	std::cout << HUMANB_TEXT << this->name << " destroyed" << std::endl;
	return ;
}

void	HumanB::attack(void) const
{
	if (this->weapon == nullptr)
		std::cout << HUMANB_TEXT << this->name << " attacks with their fists" << std::endl;
	else
		std::cout << HUMANB_TEXT << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
