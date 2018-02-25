#include "phonebook.hpp"
#include <iostream>

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
        std::cout << "Your Phonebook is full, select a contact to replace, or press Enter to return to the menu: ";
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
        std::cout << "Select an contact index to display: ";
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

/**
 * ****** CLASS CONTACT *******
 */

Contact::Contact() : _firstName(""), _lastName(""), _nickName("")
{}

void    Contact::displayData(std::string data) const
{
    int padding(0);
    std::string str("");

    padding = 10 - data.size();
    for (int i = 0; i < padding; i++)
        putchar(' ');
    str = data.size() > 10 ? data.substr(0, 9) + '.' : data;
    std::cout << str << "|";
}

void    Contact::displayTruncContact(int index) const
{
    std::cout << "        " << index << "|";

    displayData(_firstName);
    displayData(_lastName);
    displayData(_nickName);

    std::cout << std::endl;
}

void    Contact::displayFullContact() const
{
    std::cout << "First name        : " << _firstName << std::endl;
    std::cout << "Last name         : " << _lastName << std::endl;
    std::cout << "Nick name         : " << _nickName << std::endl;
    std::cout << "Login             : " << _login << std::endl;
    std::cout << "Postal address    : " << _postalAddress << std::endl;
    std::cout << "Email address     : " << _emailAddress << std::endl;
    std::cout << "Phone number      : " << _phoneNUmber << std::endl;
    std::cout << "Birth date        : " << _birthDate << std::endl;
    std::cout << "Favorite meal     : " << _favoriteMeal << std::endl;
    std::cout << "Underwear color   : " << _underwearColor << std::endl;
    std::cout << "Darkest secret    : " << _darkestSecret << std::endl;
    std::cout << std::endl;
}

void    Contact::setFirstName(std::string data)
{
    _firstName = data;
}

void    Contact::setLastName(std::string data)
{
    _lastName = data;
}

void    Contact::setNickName(std::string data)
{
    _nickName = data;
}

void    Contact::setLogin(std::string data)
{
    _login = data;
}

void    Contact::setPostalAddress(std::string data)
{
    _postalAddress = data;
}

void    Contact::setEmailAddress(std::string data)
{
    _emailAddress = data;
}

void    Contact::setPhoneNumber(std::string data)
{
    _phoneNUmber = data;
}

void    Contact::setBirthDate(std::string data)
{
    _birthDate = data;
}

void    Contact::setFavMeal(std::string data)
{
    _favoriteMeal = data;
}

void    Contact::setUnderwearColor(std::string data)
{
    _underwearColor = data;
}

void    Contact::setDarkestSecret(std::string data)
{
    _darkestSecret = data;
}

int main(int ac, char **av)
{
    (void)ac;
    (void)av;
    
    Phonebook app;
    std::string cmd("");

    do {
        std::cout << "Type a command: ADD -> add a new contact." << std::endl;
        std::cout << "                SEARCH -> search a contact." << std::endl;
        std::cout << "                EXIT -> quit the program." << std::endl;

        std::cin >> cmd;
        std::cin.ignore();

        if (cmd == "ADD" || cmd == "add")
            app.add();
        else if (cmd == "SEARCH" || cmd == "search")
            app.search();
        else if (cmd != "EXIT" && cmd != "exit")
            std::cout << "Wrong command entered." << std::endl;
    } while (cmd != "EXIT" && cmd != "exit");

    return 0;
}