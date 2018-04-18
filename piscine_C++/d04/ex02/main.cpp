#include "ISquad.hpp"
#include "Squad.hpp"
#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
// #include "AssaultTerminator.hpp"


int main() {
    ISpaceMarine* bob = new TacticalMarine;
    ISpaceMarine* toto = new TacticalMarine;
    ISpaceMarine* titi = new TacticalMarine;

    ISquad* vlc = new Squad;
    ISquad* vlc2 = new Squad;
    // ISquad* vlc3 = new Squad;
    // ISquad* vlc4 = new Squad(*vlc2); // Copy constructor: clone all units in the squad

    vlc->push(bob);
    vlc->push(toto);
    vlc->push(titi);

    vlc2->push(bob);
    vlc2->push(toto);
    vlc2->push(titi);

    // vlc2 = vlc3; //destruction of the units in vlc2: destruct units in vlc also
    // vlc2->push(jim);

    for (int i = 0; i < vlc->getCount(); ++i)
    {
        ISpaceMarine* cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    delete vlc;



    // ISpaceMarine* bob = new TacticalMarine;
    // ISpaceMarine* jim = new AssaultTerminator;

    // ISquad* vlc = new Squad;
    // ISquad* vlc2 = new Squad;

    // vlc->push(bob);
    // vlc->push(jim);

    // vlc2->push(bob);
    // vlc2->push(jim);
    // for (int i = 0; i < vlc->getCount(); ++i)
    // {
    //     ISpaceMarine* cur = vlc->getUnit(i);
    //     cur->battleCry();
    //     cur->rangedAttack();
    //     cur->meleeAttack();
    // }
    // delete vlc;
return 0; }