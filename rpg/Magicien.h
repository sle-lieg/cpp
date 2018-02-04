#ifndef MAGICIEN_H
# define MAGICIEN_H

#include "Personnage.h"
#include <string>

class Magicien : public Personnage
{
    public:
        Magicien(std::string nom);
        void    bouleDeFeu(Personnage &cible) const;
        void    foudre(Personnage &cible) const;
        void    etatPerso() const;

    protected:
        int _mana;
        int _magie;
};

#endif