#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
    srand(time(NULL));
    // ClapTrap *clap1 = new FragTrap("Clappy");
    FragTrap frag1("Fraggy");

    // ClapTrap clap2;
    // FragTrap frag2;

    // clap2 = clap1;
    // frag2 = frag1;

    // frag1.vaulthunter_dot_exe("Baddass11");
    // frag2.vaulthunter_dot_exe("Baddass22");


    // clap1.rangedAttack("Baddass");
    // clap1.meleeAttack("Bigboss");
    // clap1.takeDamage(50);
    // clap1.beRepaired(25);

    frag1.rangedAttack("Baddass");
    // frag1.meleeAttack("Bigboss");
    frag1.takeDamage(20);
    // frag1.beRepaired(25);

    // ScavTrap scav1("Scavy");

    // FragTrap frag1("Fraggy");
    // FragTrap frag2(frag1);
    // // FragTrap frag3 = frag2;
    // // frag3 = frag1;
    // ScavTrap scav1("Scavy");
    // ScavTrap scav2(scav1);    

    // frag1.rangedAttack("Baddass");
    // frag1.meleeAttack("Bigboss");
    // frag1.takeDamage(50);
    // frag1.beRepaired(25);
    // frag1.vaulthunter_dot_exe("TARGET");
    // frag1.vaulthunter_dot_exe("TARGET");
    // frag2.vaulthunter_dot_exe("TARGET");
    // frag2.vaulthunter_dot_exe("TARGET");

    // scav1.rangedAttack("Baddass");
    // scav1.meleeAttack("Bigboss");
    // scav1.takeDamage(50);
    // scav1.beRepaired(25);
    // scav1.challengeNewcomer("TARGET");
    // scav1.challengeNewcomer("TARGET");
    // scav2.challengeNewcomer("TARGET");
    // scav2.challengeNewcomer("TARGET");
    return 0;
}