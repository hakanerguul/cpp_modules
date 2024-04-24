#include "AForm.hpp"

AForm::AForm(const std::string &name, const int gradeToSign, const int gradeToExecute) : name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
	this->_signed = false;
}

AForm::~AForm(void){}

AForm::AForm(AForm const &src) : name(src.name), gradeToSign(src.gradeToSign), gradeToExecute(src.gradeToExecute)
{
	*this = src;
}

std::string const& AForm::getName(void) const
{
	return (this->name);
}

bool	AForm::getSigned(void) const
{
	return (this->_signed);
}

int	AForm::getGradeToSign(void) const
{
	return (this->gradeToSign);
}

int	AForm::getGradeToExecute(void) const
{
	return (this->gradeToExecute);
}

void	AForm::beSigned(Bureaucrat const &bureaucrat)
{
    if (bureaucrat.getGrade() > this->gradeToSign)
        throw Bureaucrat::GradeTooLowException();
    this->_signed = true;
}
AForm::AForm(void) : name("default"), gradeToSign(150), gradeToExecute(150)
{
	this->_signed = false;
}

AForm& AForm::operator=(AForm const &rhs)
{
	this->_signed = rhs._signed;
	return (*this);
}