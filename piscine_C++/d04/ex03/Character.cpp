#include "Character.hpp"

Character::Character(std::string name) :
    _name(name)
{
    for (int i = 0; i < MAX_MATERIAS; ++i)
        _materiaSlot[i] = nullptr;
}

Character::Character(Character const & character) :
    _name(character.getName())
{
    AMateria* src = nullptr;

    for (int i = 0; i < MAX_MATERIAS; ++i)
    {
        src = character._materiaSlot[i];
        if (src)
        {
            _materiaSlot[i] = src->clone();
            _materiaSlot[i]->incrNbEquiped();
        }
        else
            _materiaSlot[i] = nullptr;
    }
}

Character::~Character()
{
    for (int i = 0; i < MAX_MATERIAS; ++i)
    {
        if (_materiaSlot[i] && _materiaSlot[i]->getNbEquiped() == 1)
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
        {
            _materiaSlot[i]->decrNbEquiped();
            if (_materiaSlot[i]->getNbEquiped() == 0)
                delete _materiaSlot[i];
        }
        _materiaSlot[i] = nullptr;
        src = character._materiaSlot[i];
        if (src)
        {
            _materiaSlot[i] = src->clone();
            _materiaSlot[i]->incrNbEquiped();
        }
    }
    return *this;
}

std::string const & Character::getName() const
{
    return _name;
}

void    Character::equip(AMateria* m)
{
    for (int i = 0; i < MAX_MATERIAS; ++i)
    {
        if (!_materiaSlot[i])
        {
            _materiaSlot[i] = m;
            m->incrNbEquiped();
            return;
        }
    }
}

void Character::unequip(int idx)
{
    if (_materiaSlot[idx])
        _materiaSlot[idx]->decrNbEquiped();
    _materiaSlot[idx] = nullptr;
}

void Character::use(int idx, ICharacter& target)
{
    if (_materiaSlot[idx])
        _materiaSlot[idx]->use(target);
}

AMateria*       Character::getMateria(int idx) const
{
    return _materiaSlot[idx];
}