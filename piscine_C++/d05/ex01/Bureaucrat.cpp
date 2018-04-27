#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) :
    _name(name), _grade(grade)
{
    if (grade < 1)
        throw GradeToHighException();
    if (grade > 150)
        throw GradeToLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &bureaucrat) :
    _name(bureaucrat._name), _grade(bureaucrat._grade)
{}

Bureaucrat::~Bureaucrat()
{}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &bureaucrat)
{
    _grade = bureaucrat._grade;
    return *this;
}

std::string     Bureaucrat::getName() const
{
    return _name;
}

int             Bureaucrat::getGrade() const
{
    return _grade;
}

void            Bureaucrat::incrGrade()
{
    if (_grade == 1)
        throw GradeToHighException();
    --_grade;
}

void            Bureaucrat::decrGrade()
{
    if (_grade == 150)
        throw GradeToLowException();
    ++_grade;
}

Bureaucrat::GradeToHighException::GradeToHighException()
{}

Bureaucrat::GradeToHighException::~GradeToHighException() throw()
{}

const char* Bureaucrat::GradeToHighException::what() const throw()
{
    return ("Error: already at highest grade (1)");
}

Bureaucrat::GradeToLowException::GradeToLowException()
{}

Bureaucrat::GradeToLowException::~GradeToLowException() throw()
{}

const char* Bureaucrat::GradeToLowException::what() const throw()
{
    return ("Error: already at lowest grade (150)");
}

std::ostream& operator<<(std::ostream & flux, Bureaucrat const & bureaucrat)
{
    flux << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return flux;
}