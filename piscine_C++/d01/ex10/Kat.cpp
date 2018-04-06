#include "Kat.hpp"
#include <iostream>

Kat::Kat(std::string const args[]) : _args(args[])
{
    for (int i = 1; _args[i]; ++i)
    {
        if (_args[i] == ">")
    }
}

Kat::~Kat()
{}

void    Kat::processArgs() const
{
    for (int i = 1; _args[i]; ++i)
    {
        if (_args[i] == "-")
            readStdin();
        else
            readFile(_args[i]);
    }
}