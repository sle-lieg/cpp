#include <iostream>
#include "Phonebook.class.hpp"

/**
 * ****** CLASS PHONEBOOK *******
 */

Phonebook::Phonebook() : _nbContacts(0)
{}

void    Phonebook::add()
{
    int idContact(_nbContacts);

    if (_nbContacts >= NB_CONTACTS)
    {
        displayContactsList();
        std::cout << "Your Phonebook is full, select a contact to replace, or -1 to return to the menu: ";
        do {
            std::cin >> idContact;
            std::cin.ignore();
            
            std::cout << "ID CONTACT: " << idContact << std::endl;

            if (idContact == -1)
                return;
            if (idContact < 0 || idContact >= NB_CONTACTS)
                std::cout << "Invalid index selected: ";        
        } while (idContact < 0 || idContact >= NB_CONTACTS);
    }

    Contact     &curContact = _contacts[idContact];
    std::string data("");

    do {
        std::cout << "First name: ";
        getline(std::cin, data);
        if (data == "")
            std::cout << "First name invalid." << std::endl;
    } while (data == "");
    curContact.setFirstName(data);

    do {
        std::cout << "Last name: ";
        getline(std::cin, data);
        if (data == "")
            std::cout << "Last name invalid." << std::endl;
    } while (data == "");
    curContact.setLastName(data);

    std::cout << "Nickname: ";
    getline(std::cin, data);
    curContact.setNickName(data);

    std::cout << "Login: ";
    getline(std::cin, data);
    curContact.setLogin(data);

    std::cout << "Postal address: ";
    getline(std::cin, data);
    curContact.setPostalAddress(data);

    std::cout << "Email address: ";
    getline(std::cin, data);
    curContact.setEmailAddress(data);

    std::cout << "Phone number: ";
    getline(std::cin, data);
    curContact.setPhoneNumber(data);

    std::cout << "Birth date: ";
    getline(std::cin, data);
    curContact.setBirthDate(data);

    std::cout << "Favourite Meal: ";
    getline(std::cin, data);
    curContact.setFavMeal(data);

    std::cout << "Underwear color: ";
    getline(std::cin, data);
    curContact.setUnderwearColor(data);

    std::cout << "Darkest secret: ";
    getline(std::cin, data);
    curContact.setDarkestSecret(data);

    _nbContacts++;
}

void    Phonebook::search() const
{
    int index(-1);

    displayContactsList();
    do {
        std::cout << "Select a contact index to display: ";
        std::cin >> index;
        std::cin.ignore();
        if (index < 0 || index >= _nbContacts)
            std::cout << "Index not valid." << std::endl;
    } while (index < 0 || index >= _nbContacts);

    _contacts[index].displayFullContact();
}

void    Phonebook::displayContactsList() const
{
    std::cout << "    index|first name| last name|  nickname|" << std::endl;
    for (int i = 0; i < _nbContacts; i++)
        _contacts[i].displayTruncContact(i);
    std::cout << std::endl;    
}
