#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("PresidentialPardonForm", 25, 5)
{
	this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)
{
	*this = other;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	this->target = other.target;
	return(*this);
}

void PresidentialPardonForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (this->getSigned() == true)
		throw Bureaucrat::SignedException();
	if (bureaucrat.getGrade() > this->gradeToSign)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_signed = true;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > this->gradeToExecute)
		throw Bureaucrat::GradeTooLowException();
	else
		std::cout << this->target << " has been pardoned by Zafod Beeblebrox!" << std::endl;
}