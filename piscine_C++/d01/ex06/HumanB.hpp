/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-lieg <sle-lieg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 14:48:22 by sle-lieg          #+#    #+#             */
/*   Updated: 2018/04/02 14:48:25 by sle-lieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
    public:
        HumanB(std::string name);
        ~HumanB();

        void attack( void ) const;
        void setWeapon(const Weapon& weapon);

    private:
        const Weapon*     _weapon;
        std::string _name;
};

#endif