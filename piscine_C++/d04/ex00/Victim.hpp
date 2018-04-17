#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>

class Victim
{
    public:
        Victim(std::string name);
        Victim(Victim const &);
        virtual ~Victim();

        Victim& operator=(Victim const &);

        std::string     getName() const;
        virtual void    getPolymorphed() const;

    protected:
        std::string _name;

    private:
        Victim();
};

std::ostream& operator<<(std::ostream & flux, Victim const &);

#endif