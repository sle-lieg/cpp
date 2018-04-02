/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-lieg <sle-lieg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 14:48:08 by sle-lieg          #+#    #+#             */
/*   Updated: 2018/04/02 14:48:09 by sle-lieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) :  _name(name), _weapon(nullptr)
{}

HumanB::~HumanB()
{}

void    HumanB::setWeapon(const Weapon& weapon)
{
    _weapon = &weapon;
}

void HumanB::attack() const
{
    std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}