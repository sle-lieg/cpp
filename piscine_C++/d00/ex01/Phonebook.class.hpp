#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include "Contact.class.hpp"

#define NB_CONTACTS 8

class Phonebook {
    
    public:
        Phonebook();
        void    add();
        void    search() const;
        void    exit() const;
        void    displayContactsList() const;

    protected:
        int     _nbContacts;
        Contact _contacts[NB_CONTACTS];
};

#endif