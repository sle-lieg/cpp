#ifndef SPACESHIP_HPP
# define SPACESHIP_HPP

#include "GameEntities.hpp"

class SpaceShip
{
     public:
        SpaceShip();
        SpaceShip(SpaceShip const &);
        ~SpaceShip();

        SpaceShip& operator=(SpaceShip const &);

        // void    move();

    private:
        int     _pos_x;
        int     _pos_y;
        // COULEUR
        // FORME [][]
};

#endif