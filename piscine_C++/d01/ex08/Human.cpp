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
    std::map<std::string, funcTab> funcs;

    funcs["meleeAttack"] = &Human::meleeAttack;
    funcs["rangedAttack"] = &Human::rangedAttack;
    funcs["intimidatingShout"] = &Human::intimidatingShout;

    ((*this).*funcs[action_name])(target);
}
