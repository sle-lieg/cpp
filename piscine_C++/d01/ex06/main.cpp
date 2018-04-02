/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-lieg <sle-lieg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 14:47:40 by sle-lieg          #+#    #+#             */
/*   Updated: 2018/04/02 14:47:43 by sle-lieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>

int main() {
    {
        /**
         * In HumanA, we use a reference to store the weapon, because it is given at the construction of the object,
         * so it doesn't need to be reaffected. So we built HumanA with a name, and a CONSTANTE ref to an Object of type Weapon,
         * constante because we don't need to modify the object referred to FROM the HumanA class. The Weapon object mutate
         * itself.
         *  + easy grammar to use the Weapon in the HumaA (no '->' or '*(weapon))'
         *  + the reference is by definition Const correct, since the ref has to be initialised at construction, and can't be reaffected.
         */
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
    
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        /**
         * In HumanB, we have to use a pointer, since the Weapon attribute is not affected in the HumanB constructor, therefor
         * we have to create and initalisate a pointer to Weapon at nullptr, and then affect it through the HumanB.setWeapon()
         * member function the address of the given object.
         */
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
}