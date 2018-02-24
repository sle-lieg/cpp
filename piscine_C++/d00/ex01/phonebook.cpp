#include "phonebook.hpp"
#include <iostream>

/**
 * ****** CLASS PHONEBOOK *******
 */

Phonebook::Phonebook() : _nbContacts(0)
{}

void    Phonebook::add()
{
    Contact     curContact = _contacts[_nbContacts];
    std::string data;

    std::cout << "First name: ";
    getline(std::cin, data);
    curContact.setFirstName(data);

    std::cout << "Last name: ";
    getline(std::cin, data);
    curContact.setLastName(data);

    std::cout << "Nickname: ";
    getline(std::cin, data);
    curContact.setLastName(data);

    _nbContacts++;
    /** TODOS
     * add more datas
     */
}

void    Phonebook::search()
{
    for (int i = 0; i < _nbContacts; i++)
        _contacts[i].displayTruncContact(i);

    /** TODOS
     * select an index to show
     */
}


/**
 * ****** CLASS CONTACT *******
 */

Contact::Contact() : _firstName(""), _lastName(""), _nickName("")
{}

void    Contact::displayTruncContact(int index)
{
    std::cout << "    index|first name| last name|  nickname" << std::endl;
    std::cout << "         " << index << "|" << _firstName << "|" << _lastName << "|" << _nickName << std::endl;
}

void    Contact::setFirstName(std::string data)
{
    _firstName = data;
}

void    Contact::setLastName(std::string data)
{
    _lastName = data;
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