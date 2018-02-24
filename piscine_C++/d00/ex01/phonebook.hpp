#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <string>

#define NB_CONTACTS 8

class Contact {
    public:
        Contact();
        void    displayTruncContact(int index);
        void    displayFullContact();        
        void    setFirstName(std::string data);
        void    setLastName(std::string data);

    protected:
        std::string _firstName;
        std::string _lastName;
        std::string _nickName;
        // std::string login;
        // std::string postalAddress;
        // std::string emailAddress;
        // std::string phoneNUmber;
        // std::string birthDate;
        // std::string favoriteMeal;
        // std::string underwearColor;
        // std::string darkestSecret;
};

class Phonebook {
    public:
        Phonebook();
        void    add();
        void    search();
        void    exit();

    protected:
        int     _nbContacts;
        Contact _contacts[NB_CONTACTS];
};

#endif