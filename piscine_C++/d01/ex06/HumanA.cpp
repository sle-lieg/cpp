/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-lieg <sle-lieg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 14:48:15 by sle-lieg          #+#    #+#             */
/*   Updated: 2018/04/02 14:48:17 by sle-lieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, const Weapon& weapon) :  _name(name), _weapon(weapon)
{}

HumanA::~HumanA()
{}

void HumanA::attack() const
{
    std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}