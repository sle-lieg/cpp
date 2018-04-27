#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <ostream>

class Bureaucrat
{
     public:
        Bureaucrat(std::string name, int grade);
        Bureaucrat(Bureaucrat const &);
        ~Bureaucrat();

        Bureaucrat& operator=(Bureaucrat const &);

        class GradeToHighException : public std::exception
        {
            public:
                GradeToHighException();
                GradeToHighException(GradeToHighException const &);
                ~GradeToHighException() _NOEXCEPT;
                virtual const char* what() const throw();
            private:
                GradeToHighException& operator=(GradeToHighException const &);
        };

        class GradeToLowException : public std::exception
        {
            public:
                GradeToLowException();
                GradeToLowException(GradeToLowException const &);
                ~GradeToLowException() _NOEXCEPT;
                virtual const char* what() const throw();
            private:
                GradeToLowException& operator=(GradeToLowException const &);
        };

        std::string     getName() const;
        int             getGrade() const;
        void            incrGrade();
        void            decrGrade();

    private:
        Bureaucrat();

        std::string const   _name;
        int                 _grade;
};

std::ostream& operator<<(std::ostream & flux, Bureaucrat const &);

#endif