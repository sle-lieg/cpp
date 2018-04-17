#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <iostream>

class Contact {
    public:
        Contact();
        void    displayTruncContact(int index) const;
        void    displayFullContact() const;
        void    displayData(std::string data) const;

        void    setFirstName(std::string data);
        void    setLastName(std::string data);
        void    setNickName(std::string data);
        void    setLogin(std::string data);
        void    setPostalAddress(std::string data);
        void    setEmailAddress(std::string data);
        void    setPhoneNumber(std::string data);
        void    setBirthDate(std::string data);
        void    setFavMeal(std::string data);
        void    setUnderwearColor(std::string data);
        void    setDarkestSecret(std::string data);
        
    private:
        std::string _firstName;
        std::string _lastName;
        std::string _nickName;
        std::string _login;
        std::string _postalAddress;
        std::string _emailAddress;
        std::string _phoneNUmber;
        std::string _birthDate;
        std::string _favoriteMeal;
        std::string _underwearColor;
        std::string _darkestSecret;
};

#endif