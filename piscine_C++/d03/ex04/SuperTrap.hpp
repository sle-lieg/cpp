#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

#include <iostream>
#include <string>

class SuperTrap : public FragTrap, public NinjaTrap
{
    public:
        SuperTrap( void );
        SuperTrap( std::string const name );
        SuperTrap( SuperTrap const & );
        ~SuperTrap( void );

        SuperTrap& operator=( SuperTrap const & );
};

#endif

// #include <iostream>
using namespace std;
class Enfant //classe dérivée
{
    public: void Marcher(); //il marche
    void Rire(); //il rit
    protected: private: 
};
class Oiseau
{
    public: void Chanter(); //il chante
    void Voler(); //il vole
};
//la classe Cherubin hérite d’Enfant et de Oiseau :
class Cherubin : public Enfant, public Oiseau
{

};