/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olivierroy <olivierroy@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:22:02 by olivierroy        #+#    #+#             */
/*   Updated: 2024/01/24 21:57:34 by olivierroy       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

# include <iostream>
# include <string>

class Harl
{
private:

    void	debug(void);
    void	info(void);
    void	warning(void);
    void	error(void);

    void    (Harl::*_f[4])(void);
    std::string _levels[4];

public:

    Harl(void);
    ~Harl(void);

    void	complain(std::string level);

};

#endif
