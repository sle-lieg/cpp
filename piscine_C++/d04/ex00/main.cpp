#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int main()
{
    Sorcerer robert("Robert", "the Magnificent");
    Victim* jim = new Looser("Jack");
    // Victim jim("Jimmy");
    Peon joe("Joe");
    // Looser jack("Jack");

    std::cout << robert << jim << joe;
    // robert.polymorph(jim);
    robert.polymorph(joe);
    delete jim;

    return 0;
}