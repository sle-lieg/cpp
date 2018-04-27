#include "../headers/Map.hpp"

Border::Border() :
    _ts('*'), _rs(' '), _bs('*'), _ls(' '), _tl('+'), _tr('+'), _bl('+'), _br('+')
{}


Map::Map()
{
    initscr();
    _max_x = getmaxx(stdscr);
    _max_y = getmaxy(stdscr);
    wborder(stdscr, _bdr._ls, _bdr._rs, _bdr._ts, _bdr._bs, _bdr._tl, _bdr._tr, _bdr._bl, _bdr._br);
    refresh();
    // getch();
}

Map::~Map()
{
    endwin();
}