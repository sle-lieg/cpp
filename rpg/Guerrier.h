#ifndef GUERRIER_H
# define GUERRIER_H

#include "Personnage.h"
#include <string>

class Guerrier : public Personnage
{
    public:
        Guerrier(std::string nom);
        void    coupEpee(Personnage &cible) const;
};

#endif