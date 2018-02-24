#include "Vehicules.h"
#include <vector>

using namespace std;

int main()
{
    Garage garage;
    garage.ajouterVehicule(new Voiture("Ferrari", 150000, 1980, 3));
    garage.ajouterVehicule(new Moto("Hornet", 3000, 2005, 218));
    garage.ajouterVehicule(new Vehicule("Tracteur", 14000, 1970));
    garage.ajouterVehicule(new Camion("Semi", 45000, 1978, 38000));

    garage.AfficherStock();

    return 0;
}