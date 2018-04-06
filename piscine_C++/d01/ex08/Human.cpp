#include <iostream>
#include <map>
#include "Human.hpp"

void    Human::meleeAttack(std::string const & target)
{
    std::cout << "Sword attack on " << target << std::endl;
}

void    Human::rangedAttack(std::string const & target)
{
    std::cout << "Throw a rock on " << target << std::endl;
}

void    Human::intimidatingShout(std::string const & target)
{
    std::cout << "Scream on " << target << std::endl;    
}

void    Human::action(std::string const & action_name, std::string const & target)
{
    size_t const nbActions = 3;
    funcTab funcs[nbActions];
    std::string actionTab[nbActions];

    funcs[0] = &Human::meleeAttack;
    funcs[1] = &Human::rangedAttack;
    funcs[2] = &Human::intimidatingShout;
    
    actionTab[0] = "meleeAttack";
    actionTab[1] = "rangedAttack";
    actionTab[2] = "intimidatingShout";

    for (size_t i = 0; i < nbActions; i++)
    {
        if (actionTab[i] == action_name)
        {
            ((*this).*funcs[i])(target);
            return;
        }
    }    
/*
    std::map<std::string, funcTab> funcs;

    funcs["meleeAttack"] = &Human::meleeAttack;
    funcs["rangedAttack"] = &Human::rangedAttack;
    funcs["intimidatingShout"] = &Human::intimidatingShout;

    ((*this).*funcs[action_name])(target);
*/

}
