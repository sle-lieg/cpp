#include "Vehicules.h"
#include <iostream>
#include <string>

using namespace std;

/**
 ** Class VEHICULE
 **/
Vehicule::Vehicule(string marque, int prix) : _marque(marque), _prix(prix)
{
}

Vehicule::~Vehicule()
{}

void    Vehicule::affiche() const
{
    cout << "---- VEHICULE ----" << endl;
}

/**
 ** Class VOITURE
 **/
Voiture::Voiture(string marque, int prix, int nbPortes) : Vehicule(marque, prix), _nbPortes(nbPortes)
{
}

Voiture::~Voiture()
{}

void    Voiture::affiche() const
{
    cout << "---- VOITURE ----" << endl;
}

/**
 ** Class MOTO
 **/
Moto::Moto(std::string marque, int prix, double vitesse) : Vehicule(marque, prix), _vitesse(vitesse)
{
}

Moto::~Moto()
{}

void    Moto::affiche() const
{
    cout << "---- MOTO ----" << endl;
}
