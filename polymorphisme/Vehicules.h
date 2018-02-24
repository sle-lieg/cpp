#ifndef VEHICULES_H
# define VEHICULES_H

#include <string>
#include <vector>

class Vehicule
{
    public:
        Vehicule(std::string marque, int prix, int annee);
        virtual ~Vehicule();
        virtual void    affiche() const;
        virtual void    getInfos() const;

    protected:
        int         _prix;
        int         _annee;
        std::string _marque;
};

class Voiture : public Vehicule
{
    public:
        Voiture(std::string marque, int prix, int annee, int nbPortes);
        virtual ~Voiture();
        virtual void    affiche() const;
        virtual void    getInfos() const;        

    private:
        int _nbPortes;
};

class Moto : public Vehicule
{
    public:
        Moto(std::string marque, int prix, int annee, double vitesse);
        virtual ~Moto();
        virtual void    affiche() const;
        virtual void    getInfos() const;

    private:
        double  _vitesse;
};

class Camion : public Vehicule
{
    public:
        Camion(std::string marque, int prix, int annee, int poid);
        virtual ~Camion();
        virtual void    affiche() const;
        virtual void    getInfos() const;

    protected:
        int _poid;
};

class Garage
{
    public:
        Garage();
        void    ajouterVehicule(Vehicule *newVehicule);
        void    AfficherStock() const;

    protected:
        std::vector<Vehicule*> _stock;
};


#endif