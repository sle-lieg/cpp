#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

#define MAX_MATERIAS 4

// class AMateria;
class Character : public ICharacter
{
    public:
        Character(std::string name);
        Character(Character const &);        
        ~Character();

        Character& operator=(Character const &);

        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);

    private:
        std::string _name;
        AMateria*   _materiaSlot[MAX_MATERIAS];
    
        Character();

};

#endif