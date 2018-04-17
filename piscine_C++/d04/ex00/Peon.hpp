#ifndef PEON_HPP
# define PEON_HPP

#include "Victim.hpp"

class Peon : public Victim
{
    public:
        Peon(std::string name);
        Peon(Peon const &);
        ~Peon();

        Peon&   operator=(Peon const &);

        void    getPolymorphed() const;

    private:
        Peon();

};

class Looser : public Peon
{
    public:
        Looser(std::string name);
        Looser(Looser const &);
        ~Looser();

        Looser&   operator=(Looser const &);

        void    getPolymorphed() const;
        
    private:
        Looser();
};

#endif