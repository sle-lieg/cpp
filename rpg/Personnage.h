#ifndef PERSONNAGE_H
# define PERSONNAGE_H

#include <iostream>
#include <string>

class Personnage
{
    public:
        Personnage();
        Personnage(std::string nom);
        void    recevoirDegats(int degats);
        void    coupDePoing(Personnage &cible) const;
        void    etatPerso() const;

    protected:
        int         _hp;
        int         _force;
        std::string _nom;
};

#endif