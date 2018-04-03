#include <iostream>
#include <string>
#include "Replacer.hpp"

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "Error: missing arguments\nUsage: [file] [str to find] [str to write]" << std::endl;
        return -1;
    }
    try {
        Replacer p(av[1], av[2], av[3]);
        p.replace();
        p.closeFiles();
    } catch(char const* e) {
        std::cout << e << std::endl;
        return -1;
    }
    return 0;
}