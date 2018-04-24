#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

#define MAX_MATERIAS 4

class AMateria
{
    public:
        AMateria(std::string const & type);
        AMateria(AMateria const &);
        virtual ~AMateria();


        std::string const & getType() const; //Returns the materia type
        unsigned int        getXP() const; //Returns the Materia's XP
        virtual AMateria*   clone() const = 0;
        virtual void        use(ICharacter& target);

        void            incrNbEquiped();
        void            decrNbEquiped();
        unsigned int    getNbEquiped() const;
        

    private:
        AMateria& operator=(AMateria const &);
        // AMateria(); ??????? FCOC ?????    
        std::string     _type;
        unsigned int    _xp;
        unsigned int    _nbEquiped;
};

#endif

// _type et _xp en private ??