#ifndef MAP_HPP
# define MAP_HPP

#include <ncurses.h>

struct Border
{
	Border();

	chtype _ts;
	chtype _rs;
	chtype _bs;
	chtype _ls;
	chtype _tl;
	chtype _tr;
	chtype _bl;
	chtype _br;
};

class Map
{
	public:
        Map();
        ~Map();

    private:
        Map(Map const &);
        Map& operator=(Map const &);

		int	_max_x;
		int	_max_y;
		Border	_bdr;
		
};

#endif
