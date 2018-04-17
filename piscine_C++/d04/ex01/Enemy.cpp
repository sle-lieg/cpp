#include "Enemy.hpp"

/***********************************************
 * *************** CONSTRUCTORS ****************
 ***********************************************/
Enemy::Enemy()
{}

Enemy::Enemy(int hp, std::string const & type) :
    _hitPoints(hp), _type(type)
{}

Enemy::Enemy(Enemy const & src) :
    _hitPoints(src._hitPoints), _type(src._type)
{}

Enemy::~Enemy()
{}

/***********************************************
 * **************** OPERATORS ******************
 ***********************************************/
Enemy& Enemy::operator=(Enemy const & src)
{
    _hitPoints = src._hitPoints;
    _type = src._type;

    return *this;
}

/***********************************************
 * ************ MEMBER FUNCTIONS ***************
 ***********************************************/
std::string const   Enemy::getType() const
{
    return _type;
}

int                 Enemy::getHP() const
{
    return _hitPoints;
}

void        Enemy::takeDamage(int damage)
{
    _hitPoints = _hitPoints > damage ? (_hitPoints - damage) : 0;
}