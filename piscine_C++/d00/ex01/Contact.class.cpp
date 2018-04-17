#include <iostream>
#include "Contact.class.hpp"

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
