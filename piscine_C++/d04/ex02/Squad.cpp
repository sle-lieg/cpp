#include "Squad.hpp"

/********************************************************
 * ******************** CONSTRUCTORS ********************
********************************************************/
Squad::Squad() : army(nullptr)
{}

Squad::Squad(Squad const &) : army(nullptr)
{
    //COPY ALL ELEMENTS OF ARMY
}


/********************************************************
 * ********************* DESTRUCTOR *********************
********************************************************/
Squad::~Squad() : _firstUnit(nullptr), _lastUnit(nullptr)
{
    // DELETE ALL ELEMENTS OF ARMY
    // SET _COUNT TO 0
}


/********************************************************
 * ********************* OPERATORS **********************
********************************************************/
Squad& Squad::operator=(Squad const &squad)
{
    // DELETE ELEMENTS IN THIS->ARMY IF ANY
    // CLONE THE ELEMENTS FROM squad

    return *this;
}


/********************************************************
 * ****************** MEMBER FUNCTIONS ******************
********************************************************/
int             Squad::getCount() const
{
    return _count;
}

ISpaceMarine*   Squad::getUnit(int unit) const
{
    if (unit > _count)
        return nullptr;
    ISpaceMarine* tmp(_firstUnit);

    for (int i = 0; i < unit; ++i)
        tmp = tmp->next;
    return tmp;
}

int             Squad::push(ISpaceMarine* unit)
{
    // ADD A UNIT TO _SQUAD
    // INCRMENT _COUNT


}