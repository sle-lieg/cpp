#include "Bureaucrat.hpp"

int main()
{
    try {
        Bureaucrat boss("John Rambo", 1);
        Bureaucrat larbin("Gaston", 150);

        Form paper("blabla", 100, 100);
                
        std::cout << boss << std::endl;
        std::cout << larbin << std::endl;
        
        // boss.incrGrade();
        larbin.decrGrade();

    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
    return (0);
}