#ifndef VEHICULES_H
# define VEHICULES_H

#include <string>

class Vehicule
{
    public:
        Vehicule(std::string marque, int prix);
        virtual ~Vehicule();
        virtual void    affiche() const;

    protected:
        int         _prix;
        std::string _marque;
};

class Voiture : public Vehicule
{
    public:
        Voiture(std::string marque, int prix, int nbPortes);
        virtual ~Voiture();
        virtual void    affiche() const;

    private:
        int _nbPortes;
};

class Moto : public Vehicule
{
    public:
        Moto(std::string marque, int prix, double vitesse);
        virtual ~Moto();
        virtual void affiche() const;

    private:
        double  _vitesse;
};


#endif