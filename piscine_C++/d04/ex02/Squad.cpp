#include "Squad.hpp"

/********************************************************
 * ******************** CONSTRUCTORS ********************
********************************************************/
Squad::Squad() :
    _firstUnit(nullptr), _lastUnit(nullptr), _nbUnits(0)
{
    print("Default Constructor");
}

Squad::Squad(Squad const & squad) :
    _firstUnit(nullptr), _lastUnit(nullptr), _nbUnits(squad.getCount())
{
    //COPY ALL ELEMENTS OF ARMY
    cloneSquad(squad);
    print("Copy Constructor");
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
// Squad& Squad::operator=(Squad const & squad)
Squad& Squad::operator=(Squad const & squad)
{
    // DELETE ELEMENTS IN THIS->ARMY IF ANY
    // CLONE THE ELEMENTS FROM squad
    destroySquad();
    cloneSquad(squad);
    print("Operator::=");

    return *this;
}

/********************************************************
 * ****************** MEMBER FUNCTIONS ******************
********************************************************/
void    Squad::destroySquad()
{
    S_Squad* tmp = _firstUnit;
    S_Squad* toDelete = nullptr;

    while (tmp)
    {
        print(tmp->unit->getNbSquad());
        std::cout << "nbSquad " << tmp->unit->getNbSquad() << std::endl;
        if (tmp->unit->getNbSquad() != 1)
        {
            --*(tmp->unit);
            tmp = tmp->next;
            continue;
        }
        toDelete = tmp;
        tmp = tmp->next;
        delete toDelete->unit;
        delete toDelete;
    }
    _firstUnit = nullptr;
    _lastUnit = nullptr;
    _nbUnits = 0;
}

void    Squad::cloneSquad(Squad const & squad)
{
    S_Squad* tmp(nullptr);
    S_Squad* cpySquad(nullptr);

    if (!squad.getCount())
        return;

    tmp = squad.getFirstUnit();
    _firstUnit = new S_Squad;
    _firstUnit->unit = tmp->unit->clone();
    ++*(_firstUnit->unit);// ????

    cpySquad = _firstUnit;
    while (tmp && tmp->next)
    {
        // tmp->unit->incrNbSquads();
        tmp = tmp->next;
        cpySquad->next = new S_Squad;
        cpySquad->next->unit = tmp->unit->clone();
        cpySquad = cpySquad->next;
        ++*(cpySquad->unit);
        // cpySquad = tmp->next;
        // tmp->setNext(cpySquad->clone());
        // tmp = tmp->next;
    }
    _lastUnit = cpySquad;
    // tmp->setNext(_lastUnit);
}

int Squad::getCount() const
{
    return _nbUnits;
}

ISpaceMarine*   Squad::getUnit(int unit) const
{
    if (unit > _nbUnits)
        return nullptr;
    S_Squad* tmp(_firstUnit);

    for (int i = 0; i < unit; ++i)
        tmp = tmp->next;
    return tmp->unit;
}

S_Squad*        Squad::getFirstUnit() const
{
    return _firstUnit;
}

S_Squad*        Squad::getLastUnit() const
{
    return _lastUnit;
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
    {
        _firstUnit = _lastUnit = new S_Squad;
        _firstUnit->unit = unit;
        _firstUnit->next = nullptr;
    }
    else
    {
        _lastUnit->next = new S_Squad;
        _lastUnit = _lastUnit->next;
        _lastUnit->unit = unit;
        _lastUnit->next = nullptr;
    }
    ++(*unit);
    return ++_nbUnits;
}

bool    Squad::isInSquad(ISpaceMarine* unit) const
{
    S_Squad*    tmp(_firstUnit);

    while (tmp)
    {
        if (tmp->unit == unit)
            return true;
        tmp = tmp->next;
    }
    return false;
}
