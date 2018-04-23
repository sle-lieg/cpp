#include "Character.hpp"

Character::Character(std::string name) :
    _name(name)
{
    for (int i = 0; i < MAX_MATERIAS; ++i)
        _materiaSlot[i] = nullptr;
}

Character(Character const & character) :
    _name(character.getName())
{
    AMateria* src = nullptr;

    for (int i = 0; i < MAX_MATERIAS; ++i)
    {
        src = character.getMateria(i);
        if (src)
            _materiaSlot[i] = src->clone();
        else
            _materiaSlot[i] = nullptr;
    }
}

~Character()
{
    for (int i = 0; i < MAX_MATERIAS; ++i)
    {
        if _materiaSlot[i]
            delete _materiaSlot[i];
    }
}

Character& Character::operator=(Character const & character)
{
    _name = character.getName();
    AMateria* src = nullptr;

    for (int i = 0; i < MAX_MATERIAS; ++i)
    {
        if (_materiaSlot[i])
            delete _materiaSlot[i];
        _materiaSlot[i] = nullptr;
        src = character.getMateria(i);
        if (src)
            _materiaSlot[i] = src->clone();
    }
}

std::string const & Character::getName() const
{
    return _name;
}

void equip(AMateria* m);
void unequip(int idx);
void use(int idx, Character& target);