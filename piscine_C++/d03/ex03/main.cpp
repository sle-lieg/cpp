#include "NinjaTrap.hpp"

int main()
{
    srand(time(NULL));

    ClapTrap clap1("clappy");
    FragTrap frag1("Fraggy");
    ScavTrap scav1("Scavy");
    NinjaTrap ninja1("shino");

    ninja1.ninjaShoebox(clap1);
    ninja1.ninjaShoebox(frag1);
    ninja1.ninjaShoebox(scav1);
    ninja1.ninjaShoebox(ninja1);
    
    return 0;
}