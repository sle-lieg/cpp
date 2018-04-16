#ifndef PEON_HPP
# define PEON_HPP

#include "Victim.hpp"

class Peon : public Victim
{
    public:
        Peon(void);
        Peon(std::string name);
        Peon(Peon const &);
        ~Peon(void);

        Peon&   operator=(Peon const &);

        void    getPolymorphed(void) const;
};

#endif