#include "FragTrap.hpp"

int main()
{
    srand(time(NULL));
    
    FragTrap frag1("Fraggy");
    FragTrap frag2(frag1);
    // FragTrap frag3 = frag2;
    // frag3 = frag1;

    frag1.rangedAttack("Baddass");
    frag1.meleeAttack("Bigboss");
    frag1.takeDamage(50);
    frag1.beRepaired(25);
    frag1.vaulthunter_dot_exe("TARGET");
    frag1.vaulthunter_dot_exe("TARGET");
    frag1.vaulthunter_dot_exe("TARGET");
    frag2.vaulthunter_dot_exe("TARGET");
    frag2.vaulthunter_dot_exe("TARGET");

    return 0;
}