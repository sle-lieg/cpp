#include "Kat.hpp"
#include <iostream>

Kat::Kat(char const **av, int ac) : _args(av)
{
    for (int i = 1; i < ac; ++i)
    {
        std::string arg{_args[i]};

        std::cout << arg << std::endl;
        if (arg == ">" && _args[++i])
        {

        }
        else if (arg == ">>")
    }
}

Kat::~Kat()
{}

void    Kat::processArgs() const
{
    // for (int i = 1; _args[i]; ++i)
    // {
    //     if (std::string(_args[i]) == "-")
    //         readStdin();
    //     else
    //         readFile(_args[i]);
    // }
}


/*
    cat file1 file2
    cat -
    cat file1 - file2
    cat file1 > fdest
    cat file1 >> fdest
    cat file1 - >fdest1 >> fdest2 - file3   
*/