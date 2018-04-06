#include "Kat.hpp"

int main(int ac, const char **av)
{
    std::string args[ac];
    for (int i = 0; i < ac; ++i)
        args[i] = av[i];
    
    Kat kat(args);

    if (ac == 1)
        kat.readStdin();
    else
        kat.processArgs();

    return 0;
}
