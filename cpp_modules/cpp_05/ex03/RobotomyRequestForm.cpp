#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
    this->target = "default";
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("RobotomyRequestForm", 72, 45)
{
    this->target = target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
{
    *this = other;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    this->target = other.target;
    return(*this);
}

void RobotomyRequestForm::beSigned(Bureaucrat const &bureaucrat)
{
    if(this->getSigned() == true)
        throw Bureaucrat::SignedException();
    if (bureaucrat.getGrade() > this->getGradeToSign())
        throw Bureaucrat::GradeTooLowException();
    else
        this->_signed = true;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    srand((unsigned) time(NULL));
    if (executor.getGrade() > this->getGradeToExecute())
        throw Bureaucrat::GradeTooLowException();
    else if (!this->getSigned())
        throw Bureaucrat::NotSignedException();
    else
    {
        std::cout << "BIIIIPP..." << std::endl;
        if (rand() % 2 == 0)
            std::cout << this->target << " has been robotomized successfully." << std::endl;
        else
            std::cout << this->target << " robotomization failed." << std::endl;
    }
}
