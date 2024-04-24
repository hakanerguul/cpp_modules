#include "Form.hpp"

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    this->isSigned = false;
}

Form::~Form()
{
	
}

std::string Form::getName() const
{
    return(this->name);
}

bool Form::getIsSigned() const
{
    if(this->isSigned == true)
        return(true);
    else
        return(false);
}

int Form::getGradeToSign() const
{
    return(this->gradeToSign);
}

int Form::getGradeToExecute() const
{
    return(this->gradeToExecute);
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
    if(bureaucrat.getGrade() <= this->gradeToSign)
        this->isSigned = true;
    else
        throw Bureaucrat::GradeTooLowException();
}

Form::Form(const Form &other) : gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute)
{
    *this = other;
}

Form& Form::operator=(const Form &other)
{
    this->isSigned = other.isSigned;
    return(*this);
}


std::ostream&	operator<<(std::ostream& os, const Form& form)
{
    os << "Form " << form.getName() << " is ";
    if(form.getIsSigned() == true)
        os << "signed";
    else
        os << "not signed";
    os << " and requires grade " << form.getGradeToSign() << " to be signed and grade " << form.getGradeToExecute() << " to be executed." << std::endl;
    return(os);
}