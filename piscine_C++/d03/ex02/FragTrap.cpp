#include "FragTrap.hpp"
#include <ctime>
#include <cstdlib>

/** **********************************************************************
 ** ************************** CONSTRUCTORS ******************************
 ** **********************************************************************/

FragTrap::FragTrap() :
    ClapTrap::ClapTrap()
{
    _attacks[0] = &FragTrap::funzerker;
    _attacks[1] = &FragTrap::laserInferno;
    _attacks[2] = &FragTrap::oneShotWonder;
    _attacks[3] = &FragTrap::senselessSacrifice;
    _attacks[4] = &FragTrap::mechromagician;
    
    std::cout << "FragTrap " << _name << " starting boot-up sequence... " << std::endl;
    std::cout << "Directive one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!" << std::endl;
}

FragTrap::FragTrap(std::string name) :
    ClapTrap::ClapTrap(name)
{
    _attacks[0] = &FragTrap::funzerker;
    _attacks[1] = &FragTrap::laserInferno;
    _attacks[2] = &FragTrap::oneShotWonder;
    _attacks[3] = &FragTrap::senselessSacrifice;
    _attacks[4] = &FragTrap::mechromagician;
    
    std::cout << "FragTrap " << _name << "  starting boot-up sequence... " << std::endl;
    std::cout << "Directive one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src) :
    ClapTrap::ClapTrap(src)
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
    std::cout << "FragTrap " << _name << " destruction." << std::endl;
}

/** **********************************************************************
 ** *************************** OPERATORS ********************************
 ** **********************************************************************/

FragTrap&   FragTrap::operator=(FragTrap const & src)
{
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

void    FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    if (_energyPoints >= 25)
    {
        std::size_t randIndex = rand() % 5;

        std::cout << "Let's play roulette !!!" << std::endl;
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