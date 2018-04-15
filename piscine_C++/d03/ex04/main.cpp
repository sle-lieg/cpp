#include "SuperTrap.hpp"

int main()
{
    srand(time(NULL));
    
    SuperTrap super1("Suppy");
    ClapTrap clap1("clappy");
    FragTrap frag1("Fraggy");
    // ScavTrap scav1("Scavy");
    // NinjaTrap ninja1("shino");

    super1.ninjaShoebox(clap1);
    super1.ninjaShoebox(frag1);
    super1.vaulthunter_dot_exe("FRAGGY");
    
    return 0;
}