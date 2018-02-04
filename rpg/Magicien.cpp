#include "Magicien.h"
#include <string>
#include <iostream>

using namespace std;

Magicien::Magicien(string nom) : Personnage(nom), _mana(100), _magie(50)
{
    _hp = 150;
    _force = 10;
}

void    Magicien::bouleDeFeu(Personnage &cible) const
{
    cible.recevoirDegats(_magie);
}

void    Magicien::foudre(Personnage &cible) const
{
    cible.recevoirDegats(_magie);
}

void    Magicien::etatPerso() const
{
    Personnage::etatPerso();
    cout << "Mana   : " << _mana << endl;
    cout << "Magie  : " << _magie << endl;
}