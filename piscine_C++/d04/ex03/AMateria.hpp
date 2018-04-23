#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
    public:
        // AMateria(); ??????????????????????
        AMateria(std::string const & type);
        AMateria(AMateria const &);
        virtual ~AMateria();

        AMateria& operator=(AMateria const &);

        std::string const & getType() const; //Returns the materia type
        unsigned int getXP() const; //Returns the Materia's XP
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);

    private:
        std::string     _type;
        unsigned int    _xp;

};

#endif