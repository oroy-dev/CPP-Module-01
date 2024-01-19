/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 16:51:19 by oroy              #+#    #+#             */
/*   Updated: 2024/01/19 17:00:17 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <string>

class Weapon
{
private:

	std::string	type;

public:

	Weapon(void);
	~Weapon(void);

	std::string	&getType(void) const;
	void		setType(std::string type) const;

};

#endif
