#include "Vehicules.h"

// void    presenter(Vehicule *v)
// {
//     v->affiche();
// }

int main()
{
    Vehicule *v(0);
    v = new Voiture("Honda", 2000, 4);

    v->affiche();
    delete v;

    return 0;
}