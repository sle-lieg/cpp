#include "Squad.hpp"

/********************************************************
 * ******************** CONSTRUCTORS ********************
********************************************************/
Squad::Squad() :
    _firstUnit(nullptr), _lastUnit(nullptr), _nbUnits(0)
{}

Squad::Squad(Squad const & squad) :
    _firstUnit(nullptr), _lastUnit(nullptr), _nbUnits(squad.getCount())
{
    //COPY ALL ELEMENTS OF ARMY
    cloneSquad(squad);
}

/********************************************************
 * ********************* DESTRUCTOR *********************
********************************************************/
Squad::~Squad()
{
    // DELETE ALL ELEMENTS OF ARMY
    destroySquad();
}

/********************************************************
 * ********************* OPERATORS **********************
********************************************************/
Squad& Squad::operator=(Squad const & squad)
{
    // DELETE ELEMENTS IN THIS->ARMY IF ANY
    // CLONE THE ELEMENTS FROM squad
    destroySquad();
    cloneSquad(squad);

    return *this;
}


/********************************************************
 * ****************** MEMBER FUNCTIONS ******************
********************************************************/
void    Squad::destroySquad()
{
    ISpaceMarine* tmp(_firstUnit);
    ISpaceMarine* toDelete(nullptr);

    while (tmp)
    {
        if (tmp->getNbSquad() != 1)
        {
            tmp->decrNbSquads();
            continue;
        }
        toDelete = tmp;
        tmp = tmp->getNext();
        delete toDelete;
    }
    _firstUnit = nullptr;
    _lastUnit = nullptr;
    _nbUnits = 0;
}

void    Squad::cloneSquad(Squad const & squad)
{
    ISpaceMarine* tmp(nullptr);
    ISpaceMarine* cpySquad(nullptr);

    if (!squad.getCount())
        return;

    tmp = squad.getUnit(squad.getCount());
    _lastUnit = tmp->clone();

    tmp = squad.getUnit(0);
    _firstUnit = tmp->clone();

    while (tmp && tmp->getNext())
    {
        tmp->incrNbSquads();
        cpySquad = tmp->getNext();
        tmp->setNext(cpySquad->clone());
        tmp = tmp->getNext();
    }
    tmp->setNext(_lastUnit);
}

int Squad::getCount() const
{
    return _nbUnits;
}

ISpaceMarine*   Squad::getUnit(int unit) const
{
    if (unit > _nbUnits)
        return nullptr;
    ISpaceMarine* tmp(_firstUnit);

    for (int i = 0; i < unit; ++i)
        tmp = tmp->getNext();
    return tmp;
}

int Squad::push(ISpaceMarine* unit)
{
    // ADD A UNIT TO _SQUAD
    // INCREMENT _nbUnits
    // INCREMENT _nbSquads    
    if (isInSquad(unit))
    {
        std::cout << "Unit already in the squad." << std::endl;
        return _nbUnits;
    }
    if (!_firstUnit)
        _firstUnit = _lastUnit = unit;
    else
    {
        _lastUnit->setNext(unit);
        _lastUnit = _lastUnit->getNext();
    }
    unit->incrNbSquads();
    return ++_nbUnits;
}

bool    Squad::isInSquad(ISpaceMarine* unit) const
{
    ISpaceMarine*   tmp(_firstUnit);
    int             nbUnits(_nbUnits);

    while (tmp && nbUnits--)
    {
        if (tmp->getIdentifier() == unit->getIdentifier())
            return true;
        tmp = tmp->getNext();
    }
    return false;
}