#include <iostream>
#include <string>
#include "Replacer.hpp"

int main(int ac, char **av)
{
    if (ac != 4)
        throw "Error: 2 arguments needed..";
    try {
        Replacer p(av[1], av[2], av[3]);
        p.replace();    
    } catch(std::string &e) {
        std::cout << e << std::endl;
        return -1;
    }
    return 0;
}