#include "Kat.hpp"

int main(int ac, char const **av)
{
    Kat kat(av, ac);

    if (ac == 1)
        kat.readStdin();
    else
        kat.processArgs();

    return 0;
}
