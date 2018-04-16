#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"

class Sorcerer
{
    public:
        Sorcerer(void);
        Sorcerer(std::string const name, std::string const title);
        Sorcerer(Sorcerer const &);
        ~Sorcerer(void);

        Sorcerer&   operator=(Sorcerer const &);

        std::string getName(void) const;
        std::string getTitle(void) const;

        void        polymorph(Victim const &) const;

    private:
        std::string _name;
        std::string _title;
};

std::ostream&   operator<<(std::ostream &, const Sorcerer::Sorcerer &);

#endif