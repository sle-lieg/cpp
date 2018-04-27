#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>

class Form
{
     public:
        Form(std::string name, int gradeSignature, int gradeExecution);
        Form(Form const &);
        ~Form();


        std::string getName() const;
        int         getGradeSignature() const;
        int         getGradeExecution() const;
        bool        isSigned() const;

    private:
        Form& operator=(Form const &);
        Form();

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

        std::string const   _name;
        bool                _isSigned;
        int const           _gradeSignature;
        int const           _gradeExecution;
};

#endif