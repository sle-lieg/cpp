/**
 * TODO: Ajouter header 42
 */

#include <iostream>

int main(int ac, char **av)
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    for (int i = 1; i < ac; i++)
    {
        for (int j = 0; av[i][j]; j++)
            putchar(toupper(av[i][j]));
    }
    std::cout << std::endl;
}
