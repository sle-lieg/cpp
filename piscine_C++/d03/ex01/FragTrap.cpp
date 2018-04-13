#include "FragTrap.hpp"
#include <ctime>
#include <cstdlib>

/** **********************************************************************
 ** ************************** CONSTRUCTORS ******************************
 ** **********************************************************************/

FragTrap::FragTrap() :
    _name("FR4G_TP"), _hitPoints(100), _maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100),
    _level(1), _meleeAttackDmg(30), _rangedAttackDmg(20), _armorDmgReduction(5)
{
    _attacks[0] = &FragTrap::funzerker;
    _attacks[1] = &FragTrap::laserInferno;
    _attacks[2] = &FragTrap::oneShotWonder;
    _attacks[3] = &FragTrap::senselessSacrifice;
    _attacks[4] = &FragTrap::mechromagician;
    
    std::cout << "Starting boot-up sequence... " << std::endl;
    std::cout << "Directive one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!" << std::endl;
}

FragTrap::FragTrap(std::string name) :
    _name(name), _hitPoints(100), _maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100),
    _level(1), _meleeAttackDmg(30), _rangedAttackDmg(20), _armorDmgReduction(5)
{
    _attacks[0] = &FragTrap::funzerker;
    _attacks[1] = &FragTrap::laserInferno;
    _attacks[2] = &FragTrap::oneShotWonder;
    _attacks[3] = &FragTrap::senselessSacrifice;
    _attacks[4] = &FragTrap::mechromagician;
    
    std::cout << "Starting boot-up sequence... " << std::endl;
    std::cout << "Directive one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src) :
    _name(src._name), _hitPoints(src._hitPoints), _maxHitPoints(src._maxHitPoints), _energyPoints(src._energyPoints),
    _maxEnergyPoints(src._maxEnergyPoints), _level(src._level), _meleeAttackDmg(src._meleeAttackDmg),
    _rangedAttackDmg(src._rangedAttackDmg), _armorDmgReduction(src._armorDmgReduction)
{
    _attacks[0] = &FragTrap::funzerker;
    _attacks[1] = &FragTrap::laserInferno;
    _attacks[2] = &FragTrap::oneShotWonder;
    _attacks[3] = &FragTrap::senselessSacrifice;
    _attacks[4] = &FragTrap::mechromagician;
    
    std::cout << "Starting cloning sequence... " << std::endl;
    std::cout << "Cloning sequence complete ! ... Hey bro !!!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "Holy crap, i can't feel my gearings anymore ... HEEEEELLLPPPFWOHFWPHFWofhwohfwc tzz tzzzz tzzzz..." << std::endl;
}

/** **********************************************************************
 ** *************************** OPERATORS ********************************
 ** **********************************************************************/

FragTrap&   FragTrap::operator=(FragTrap const & src)
{
    std::cout << "TEST" << std::endl;
    if (this != &src)
    {
        this->_name = src._name;
        this->_hitPoints = src._hitPoints;
        this->_maxHitPoints = src._maxHitPoints;
        this->_energyPoints = src._energyPoints;
        this->_maxEnergyPoints = src._maxEnergyPoints;
        this->_level = src._level;
        this->_meleeAttackDmg = src._meleeAttackDmg;
        this->_rangedAttackDmg = src._rangedAttackDmg;
        this->_armorDmgReduction = src._armorDmgReduction;
    }
    return *this;
}

/** **********************************************************************
 ** ************************ MEMBER FUNCTIONS ****************************
 ** **********************************************************************/

void    FragTrap::rangedAttack(std::string const & target) const
{
    std::cout << "Take two bullets, then call me in the morning." <<std::endl;
    std::cout << "FR4G_TP " << _name << " shot " << target << ". " << _rangedAttackDmg << " damage inflicted." << std::endl;
}

void    FragTrap::meleeAttack(std::string const & target) const
{
    std::cout << "Ready for the PUNCHLine ??? ... proud of this one ..." << std::endl;
    std::cout << "FR4G_TP " << _name << " punched " << target << ". " << _meleeAttackDmg << " damage inflicted." << std::endl;
}

void    FragTrap::takeDamage(unsigned int amount)
{
    std::cout << "OUUUCCHHHYAAA !... It hurts !" << std::endl;
    std::cout << "FR4G_TP " << _name << " received " << (amount - _armorDmgReduction) << " damages. " << std::endl;
    if (amount > _armorDmgReduction)
        _hitPoints = (amount - _armorDmgReduction) > _hitPoints ? 0 : _hitPoints - (amount - _armorDmgReduction);
}

void    FragTrap::beRepaired(unsigned int amount)
{
    std::cout << "Oh gosh, that feels good babe !!!!" << std::endl;
    std::cout << "FR4G_TP " << _name << " healed " << amount << " energy. " << std::endl;        
    _hitPoints = (_hitPoints + amount) > _maxHitPoints ? _maxHitPoints : _hitPoints + amount;
}

void    FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    if (_energyPoints >= 25)
    {
        std::size_t randIndex = rand() % 5;

        std::cout << "Let's play roulette !!!" << std::endl;    
        // std::cout << "Random index: " << randIndex << std::endl;
        ((*this).*_attacks[randIndex])(target);
        _energyPoints -= 25;
    }
    else
        std::cout << "Run..ning o..ut of ...Ener..gy..." << std::endl;        
}

void    FragTrap::funzerker(std::string const & target) const
{
    std::cout << "FR4G_TP " << _name << " cast 'Funzerker' on " << target << std::endl;    
    std::cout << _name << ": 'If I had veins, they'd be popping out right now!'" << std::endl;
}

void    FragTrap::laserInferno(std::string const & target) const
{
    std::cout << "FR4G_TP " << _name << " cast 'Laser Inferno' on " << target << std::endl;
    std::cout << _name << ": 'Everybody, dance time! Da-da-da-dun-daaa-da-da-da-dun-daaa!'" << std::endl;
}

void    FragTrap::oneShotWonder(std::string const & target) const
{
    std::cout << "FR4G_TP " << _name << " cast 'One Shot Wonder' on " << target << std::endl;
    std::cout << _name << ": 'A whole lotta bullets in just one trigger pull!'" << std::endl;
}

void    FragTrap::senselessSacrifice(std::string const & target) const
{
    std::cout << "FR4G_TP " << _name << " cast 'Senseless Sacrifice' on " << target << std::endl;    
    std::cout << _name << ": 'For you...I commit...seddoku...'" << std::endl;
}

void    FragTrap::mechromagician(std::string const & target) const
{
    std::cout << "FR4G_TP " << _name << " cast 'Mechro Magician' on " << target << std::endl;        
    std::cout << _name << ": 'Fly mini-trap! Fly!'" << std::endl;
}