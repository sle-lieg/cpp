#include "ISquad.hpp"
#include "Squad.hpp"
#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"


int main() {
    ISpaceMarine* bob = new TacticalMarine;
    ISpaceMarine* toto = new TacticalMarine;
    ISpaceMarine* titi = new TacticalMarine;

    ISquad* vlc = new Squad;
    // ISquad* vlc2 = new Squad;
    ISquad* vlc3 = new Squad;

    // std::cout << "vlc: " << vlc->getCount() << " units" << std::endl;
    // std::cout << "vlc2: " << vlc->getCount() << " units" << std::endl;
    // std::cout << "vlc3: " << vlc->getCount() << " units" << std::endl;

    vlc->push(bob);
    vlc->push(toto);
    vlc->push(titi);
    
    // std::cout << "vlc: " << vlc->getCount() << " units" << std::endl;
    // std::cout << "vlc2: " << vlc2->getCount() << " units" << std::endl;
    // std::cout << "vlc3: " << vlc3->getCount() << " units" << std::endl;
    ISquad* vlc2 = new Squad(static_cast<Squad&>(*vlc));

    // std::cout << "vlc: " << vlc->getCount() << " units" << std::endl;
    // std::cout << "vlc2: " << vlc2->getCount() << " units" << std::endl;
    // std::cout << "vlc3: " << vlc3->getCount() << " units" << std::endl;

    static_cast<Squad&>(*vlc3) = static_cast<Squad&>(*vlc2); // deep copy, so new address for each ISpaceMarine

    // std::cout << "vlc: " << vlc->getCount() << " units" << std::endl;
    // std::cout << "vlc2: " << vlc2->getCount() << " units" << std::endl;
    // std::cout << "vlc3: " << vlc3->getCount() << " units" << std::endl;

    vlc2->push(bob);
    vlc2->push(toto);
    vlc2->push(titi);

    // std::cout << "vlc: " << vlc->getCount() << " units" << std::endl;
    // std::cout << "vlc2: " << vlc2->getCount() << " units" << std::endl;
    // std::cout << "vlc3: " << vlc3->getCount() << " units" << std::endl;

    for (int i = 0; i < vlc2->getCount(); ++i)
    {
        ISpaceMarine* cur = vlc2->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    delete vlc;
    delete vlc2;
    delete vlc3;



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
    // delete vlc2;
    
    return 0; 
}