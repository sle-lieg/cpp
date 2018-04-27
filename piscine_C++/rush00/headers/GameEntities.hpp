#ifndef GAMEENTITIES_HPP
# define GAMEENTITIES_HPP

#include "Map.hpp"
#include "SpaceShip.hpp"

/**
 * Include all the different Elements of the game and
 * initialise them all at instanciation.
 * 
 */

class GameEntities
{
     public:
        GameEntities();
        ~GameEntities();


	private:
        GameEntities(GameEntities const &);
        GameEntities& operator=(GameEntities const &);

		Map			_map;
		SpaceShip	_spaceship;
		// Score		_score;
		// Rendering	_renderer;

};

#endif