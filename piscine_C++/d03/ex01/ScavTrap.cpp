#include "ScavTrap.hpp"
#include <ctime>
#include <cstdlib>

/** **********************************************************************
 ** ************************** CONSTRUCTORS ******************************
 ** **********************************************************************/

ScavTrap::ScavTrap() :
    _name("FR4G_TP"), _hitPoints(100), _maxHitPoints(100), _energyPoints(50), _maxEnergyPoints(50),
    _level(1), _meleeAttackDmg(20), _rangedAttackDmg(15), _armorDmgReduction(3)
{
    _challenge[0] = &ScavTrap::firstToDie;
    _challenge[1] = &ScavTrap::runFaster;
    _challenge[2] = &ScavTrap::rubiksChallenge;
    _challenge[3] = &ScavTrap::firstToMoveLose;
    _challenge[4] = &ScavTrap::collectAllStuff;
    
    std::cout << "Starting boot-up sequence... " << std::endl;
    std::cout << _name << ", at your service ! Ready to blow some heads, sir !" << std::endl;
}

ScavTrap::ScavTrap(std::string name) :
    _name(name), _hitPoints(100), _maxHitPoints(100), _energyPoints(50), _maxEnergyPoints(50),
    _level(1), _meleeAttackDmg(20), _rangedAttackDmg(15), _armorDmgReduction(3)
{
    _challenge[0] = &ScavTrap::firstToDie;
    _challenge[1] = &ScavTrap::runFaster;
    _challenge[2] = &ScavTrap::rubiksChallenge;
    _challenge[3] = &ScavTrap::firstToMoveLose;
    _challenge[4] = &ScavTrap::collectAllStuff;
    
    std::cout << "Starting boot-up sequence... " << std::endl;
    std::cout << _name << ", at your service ! Ready to blow some heads, sir !" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src) :
    _name(src._name), _hitPoints(src._hitPoints), _maxHitPoints(src._maxHitPoints), _energyPoints(src._energyPoints),
    _maxEnergyPoints(src._maxEnergyPoints), _level(src._level), _meleeAttackDmg(src._meleeAttackDmg),
    _rangedAttackDmg(src._rangedAttackDmg), _armorDmgReduction(src._armorDmgReduction)
{
    _challenge[0] = &ScavTrap::firstToDie;
    _challenge[1] = &ScavTrap::runFaster;
    _challenge[2] = &ScavTrap::rubiksChallenge;
    _challenge[3] = &ScavTrap::firstToMoveLose;
    _challenge[4] = &ScavTrap::collectAllStuff;
    
    std::cout << "Starting cloning sequence... " << std::endl;
    std::cout << "Cloning sequence complete ! WOOWWW !! I look handsome !!" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "This life sucks, c'ya in an other one ! Autodestruction in 3..2..1.. BIGBOOMBADABOOM !!!" << std::endl;
}

/** **********************************************************************
 ** *************************** OPERATORS ********************************
 ** **********************************************************************/

ScavTrap&   ScavTrap::operator=(ScavTrap const & src)
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

void    ScavTrap::rangedAttack(std::string const & target) const
{
    std::cout << _name << ": 'Get ready for some Fragtrap face time!.'" <<std::endl;
    std::cout << "FR4G_TP " << _name << " launched a rocket on " << target << ". " << _rangedAttackDmg << " damage inflicted." << std::endl;
}

void    ScavTrap::meleeAttack(std::string const & target) const
{
    std::cout << _name << ": 'Take that mofer thuker !!'" << std::endl;
    std::cout << "FR4G_TP " << _name << " kicked " << target << ". " << _meleeAttackDmg << " damage inflicted." << std::endl;
}

void    ScavTrap::takeDamage(unsigned int amount)
{
    std::cout << _name << "'OUUUCCHHHYAAA !... It hurts !'" << std::endl;
    std::cout << "FR4G_TP " << _name << " received " << (amount - _armorDmgReduction) << " damages. " << std::endl;
    if (amount > _armorDmgReduction)
        _hitPoints = (amount - _armorDmgReduction) > _hitPoints ? 0 : _hitPoints - (amount - _armorDmgReduction);
}

void    ScavTrap::beRepaired(unsigned int amount)
{
    std::cout << _name << "'Oh gosh, that feels good babe !!!!'" << std::endl;
    std::cout << "FR4G_TP " << _name << " healed " << amount << " Hit Points. " << std::endl;        
    _hitPoints = (_hitPoints + amount) > _maxHitPoints ? _maxHitPoints : _hitPoints + amount;
}

void    ScavTrap::challengeNewcomer(std::string const & target)
{
        std::size_t randIndex = rand() % 5;

        std::cout << _name << ": 'Come on in, " << target << ", welcome to the Challenge palace! Let's roll the dice to see what is your today's challenge!'" << std::endl;
        ((*this).*_challenge[randIndex])();
}

void    ScavTrap::firstToDie() const
{
    std::cout << _name << ": 'FIRST TO DIE !!! Simple, get in the cage, fight, and the first to die, well... LOOSES !!!'" << std::endl;
}

void    ScavTrap::runFaster() const
{
    std::cout << _name << ": 'OH OH OH, the Race challenge it is !! Easy, you participate in a race all around the city. First arrived wins.'" << std::endl;
    std::cout << _name << ": 'Oh, i forgot, eveything is permitted, so watch your back if you're fast, gzz gzz gzz gzz(robot laughing)." << std::endl;
}

void    ScavTrap::rubiksChallenge() const
{
    std::cout << _name << ": 'AAAANNNDDD, fuck, rubik's cube challenge. Well you don't need explainations, i guess.." << std::endl;
}

void    ScavTrap::firstToMoveLose() const
{
    std::cout << _name << ": 'Gzz gzz gzz, perfect ! All you have to do, is to stay still. First one to move, looses. Easy, no \?\?\?'" << std::endl;
    std::cout << _name << ": 'Oh, carefull to the bugs... the longer you stay, the more aggressive they get gzz gzz gzz gzz !" << std::endl;
}

void    ScavTrap::collectAllStuff() const
{
    std::cout << _name << ": 'Come back to see me when you'll have collected all the exotic stuff!" << std::endl;
}