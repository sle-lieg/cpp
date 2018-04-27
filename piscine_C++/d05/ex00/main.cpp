#include "Bureaucrat.hpp"

int main()
{
    try {
        Bureaucrat employee("John Rambo", 150);
        employee.decrGrade();
        std::cout << employee << std::endl;

    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
    return (0);
}