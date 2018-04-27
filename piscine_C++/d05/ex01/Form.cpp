#include "Form.hpp"

Form::Form(std::string name, int gradeSignature, int gradeExecution) :
    _name(name), _gradeSignature(gradeSignature), _gradeExecution(gradeExecution), _isSigned(false)
{
    if (gradeSignature < 1 || gradeExecution < 1)
        throw GradeToHighException();
    if (gradeSignature > 150 || gradeExecution > 150)
        throw GradeToLowException();
}

Form::Form(Form const & form) :
    _name(form._name), _gradeSignature(form._gradeSignature), _gradeExecution(form._gradeExecution), _isSigned(form._isSigned)
{}

Form::~Form()
{}

// Form& Form::operator=(Form const &)
// {}

Form::GradeToHighException::GradeToHighException()
{}

Form::GradeToHighException::~GradeToHighException() throw()
{}

const char* Form::GradeToHighException::what() const throw()
{
    return ("Error: grade can't be superior to (1)");
}

Form::GradeToLowException::GradeToLowException()
{}

Form::GradeToLowException::~GradeToLowException() throw()
{}

const char* Form::GradeToLowException::what() const throw()
{
    return ("Error: grade can't be inferior to (150)");
}

std::string Form::getName() const
{
    return _name;
}

int         Form::getGradeSignature() const
{
    return _gradeSignature;
}

int         Form::getGradeExecution() const
{
    return _gradeExecution;
}

bool        Form::isSigned() const
{
    return _isSigned;
}