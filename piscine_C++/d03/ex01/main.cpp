#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    srand(time(NULL));
    
    FragTrap frag1("Fraggy");
    FragTrap frag2(frag1);
    // FragTrap frag3 = frag2;
    // frag3 = frag1;
    ScavTrap scav1("Scavy");
    ScavTrap scav2(scav1);    

    frag1.rangedAttack("Baddass");
    frag1.meleeAttack("Bigboss");
    frag1.takeDamage(50);
    frag1.beRepaired(25);
    frag1.vaulthunter_dot_exe("TARGET");
    frag1.vaulthunter_dot_exe("TARGET");
    frag2.vaulthunter_dot_exe("TARGET");
    frag2.vaulthunter_dot_exe("TARGET");

    scav1.rangedAttack("Baddass");
    scav1.meleeAttack("Bigboss");
    scav1.takeDamage(50);
    scav1.beRepaired(25);
    scav1.challengeNewcomer("TARGET");
    scav1.challengeNewcomer("TARGET");
    scav2.challengeNewcomer("TARGET");
    scav2.challengeNewcomer("TARGET");
    return 0;
}