#include "AWeapon.hpp"

/***********************************************
 * *************** CONSTRUCTORS ****************
 ***********************************************/

AWeapon::AWeapon()
{}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) :
    _name(name), _apCost(apcost), _damage(damage)
{}

AWeapon::AWeapon(AWeapon const & src) :
    _name(src._name), _apCost(src._apCost), _damage(src._damage)
{}

AWeapon::~AWeapon()
{}

/***********************************************
 * **************** OPERATORS ******************
 ***********************************************/
AWeapon& AWeapon::operator=(AWeapon const & src)
{
    _name = src._name;
    _apCost = src._apCost;
    _damage = src._damage;

    return *this;
}

/***********************************************
 * ************ MEMBER FUNCTIONS ***************
 ***********************************************/
std::string const   AWeapon::getName() const
{
    return _name;
}

int AWeapon::getAPCost() const
{
    return _apCost;
}

int AWeapon::getDamage() const
{
    return _damage;
}