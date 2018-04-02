#include "Replacer.hpp"
#include <iostream>

Replacer::Replacer(std::string fname, std::string s1, std::string s2) :
    _filename(fname), _s1(s1), _s2(s2), _sCopy(""), _ifs(fname, std::ios::in), _ofs(fname + ".replace", std::ios::out || std::ios::trunc)
{
    if (!_ifs.is_open())
        throw "Error: file doesn't exist or path '" + fname + "' is invalid";
    if (!_ofs.is_open())
        throw "Error: path '" + fname + "' is invalid";
}

Replacer::~Replacer()
{}

void Replacer::replace( void )
{
    std::string buffer("");
    while (!_ifs.eof())
    {
        std::getline(_ifs, buffer);
        _sCopy += buffer;
    }
    std::cout << _sCopy << std::endl;
    std::size_t n = _sCopy.find()
    _ofs.write(_sCopy.replace())
}