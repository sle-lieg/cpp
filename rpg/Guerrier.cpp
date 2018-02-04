#include "Guerrier.h"
// #include <iostream>
#include <string>

using namespace std;

Guerrier::Guerrier(string nom) : Personnage(nom)
{
    _force = 50;
    _hp = 200;
}

void    Guerrier::coupEpee(Personnage &cible) const
{
    cible.recevoirDegats(_force);
}