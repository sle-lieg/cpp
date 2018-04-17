#include "Squad.hpp"

/********************************************************
 * ******************** CONSTRUCTORS ********************
********************************************************/
Squad::Squad() :
    _firstUnit(nullptr), _lastUnit(nullptr), _nbUnits(0)
{}

Squad::Squad(Squad const & squad) :
    // _firstUnit(new ISpaceMarine(*(squad.getUnit(0)))),
    // _lastUnit(new ISpaceMarine(*(squad.getUnit(squad.getCount())))),
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
Squad& Squad::operator=(Squad const &squad)
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
        toDelete = tmp;
        tmp = tmp->next;
        delete toDelete;
    }
    _firstUnit = nullptr;
    _lastUnit = nullptr;
    _nbUnits = 0;
}

void    Squad::cloneSquad(Squad const & squad)
{
    if (!squad.getCount())
        return;
    _firstUnit = new ISpaceMarine(*(squad.getUnit(0)));
    _lastUnit = new ISpaceMarine(*(squad.getUnit(squad.getCount())));

    ISpaceMarine* tmp(_firstUnit);
    ISpaceMarine* cpySquad(nullptr);    

    while (tmp && tmp->next)
    {
        cpySquad = tmp->next;        
        tmp->next = cpySquad->clone();
        tmp = tmp->next;
    }
    tmp->next = _lastUnit;
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
        tmp = tmp->next;
    return tmp;
}

int Squad::push(ISpaceMarine* unit)
{
    // ADD A UNIT TO _SQUAD
    // INCRMENT _nbUnits
    ISpaceMarine* cpyUnit(unit->clone());

    if (!_firstUnit)
    {
        _firstUnit = cpyUnit;
        _lastUnit = cpyUnit;
    }
    else
    {
        if (isInSquad(unit))
        {
            std::cout << "Unit already in the squad." << std::endl;
            return _nbUnits;
        }
        _lastUnit->next = cpyUnit;
        _lastUnit = _lastUnit->next;
    }
    return ++_nbUnits;
}

bool    Squad::isInSquad(ISpaceMarine* unit)
{
    ISpaceMarine* tmp(_firstUnit);    
    
    while (tmp)
    {
        if (tmp->getIdentifier() == unit->getIdentifier())
            return true;
        tmp = tmp->next;
    }
    return false;
}