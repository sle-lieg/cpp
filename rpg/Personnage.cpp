#include "Personnage.h"
#include <iostream>

using namespace std;

Personnage::Personnage() : _hp(100), _force(20), _nom("Soldat")
{
}

Personnage::Personnage(string nom) : _hp(100), _force(20), _nom(nom)
{
}

void    Personnage::recevoirDegats(int degats)
{
    _hp -= degats;
    cout << _nom << " perd " << degats << " points de vie." << endl;
    if (_hp <= 0)
    {
        cout << _nom << " est mort." << endl;
        _hp = 0;
    }
}

void    Personnage::coupDePoing(Personnage &cible) const
{
    cout << _nom << " attaque " << cible._nom << endl;
    cible.recevoirDegats(_force);
}

void    Personnage::etatPerso() const
{
    cout << "Nom    : " << _nom << endl;
    cout << "Vie    : " << _hp << endl;
    cout << "Force  : " << _force << endl;
}