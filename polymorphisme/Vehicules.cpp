#include "Vehicules.h"
#include <iostream>
#include <string>

using namespace std;

/**
 ** Class GARAGE
 **/
Garage::Garage()
{}

void    Garage::ajouterVehicule(Vehicule *newVehicule)
{
    _stock.push_back(newVehicule);
}

void    Garage::AfficherStock() const
{
    for (int i = 0; i < _stock.size(); i++)
    {
        _stock[i]->affiche();
    }
}

/**
 ** Class VEHICULE
 **/
Vehicule::Vehicule(string marque, int prix, int annee) : _marque(marque), _prix(prix), _annee(annee)
{}

Vehicule::~Vehicule()
{}

void    Vehicule::affiche() const
{
    cout << "---- VEHICULE ----" << endl;
    getInfos();
}

void    Vehicule::getInfos() const
{
    cout << "   Marque          :" << _marque << endl;
    cout << "   Prix            :" << _prix << endl;
    cout << "   Annee           :" << _annee << endl;
}

/**
 ** Class VOITURE
 **/
Voiture::Voiture(string marque, int prix, int annee, int nbPortes) : Vehicule(marque, prix, annee), _nbPortes(nbPortes)
{}

Voiture::~Voiture()
{}

void    Voiture::affiche() const
{
    cout << "---- VOITURE ----" << endl;
    getInfos();
}

void    Voiture::getInfos() const
{
    Vehicule::getInfos();
    cout << "   Nombre de portes:" << _nbPortes << endl;    
}

/**
 ** Class MOTO
 **/
Moto::Moto(string marque, int prix, int annee, double vitesse) : Vehicule(marque, prix, annee), _vitesse(vitesse)
{}

Moto::~Moto()
{}

void    Moto::affiche() const
{
    cout << "---- MOTO ----" << endl;
    getInfos();
}

void    Moto::getInfos() const
{
    Vehicule::getInfos();
    cout << "   Vitesse max     :" << _vitesse << endl;    
}

/**
 ** Class CAMION
 **/
Camion::Camion(string marque, int prix, int annee, int poid) : Vehicule(marque, prix, annee), _poid(poid)
{}

Camion::~Camion()
{}

void    Camion::affiche() const
{
    cout << "---- CAMION ----" << endl;
    getInfos();
}

void    Camion::getInfos() const
{
    Vehicule::getInfos();
    cout << "   Poids           :" << _poid << endl;    
}