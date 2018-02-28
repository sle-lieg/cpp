#include "Phonebook.class.hpp"
#include <iostream>

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