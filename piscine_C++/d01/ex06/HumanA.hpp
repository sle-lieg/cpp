/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-lieg <sle-lieg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 14:48:31 by sle-lieg          #+#    #+#             */
/*   Updated: 2018/04/02 14:48:32 by sle-lieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA
{
    public:

        HumanA(std::string name, const Weapon& weapon);
        ~HumanA();

        void attack( void ) const;
    
    private:

        const Weapon&     _weapon; //Impossible d'initialiser a null

        std::string _name;
};

#endif