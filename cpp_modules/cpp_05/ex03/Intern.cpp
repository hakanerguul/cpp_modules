#include "Intern.hpp"

Intern::Intern(){}

Intern::~Intern(){}

AForm* Intern::makeRobotomyRequestForm(std::string const &target)
{
	AForm* form = new RobotomyRequestForm(target);
	return form;
}

AForm* Intern::makePresidentialPardonForm(std::string const &target)
{
	AForm* form = new PresidentialPardonForm(target);
	return form;
}

AForm* Intern::makeShrubberyCreationForm(std::string const &target)
{
	AForm* form = new ShrubberyCreationForm(target);
	return form;
}


AForm* Intern::makeForm(std::string const &formName, std::string const &target)
{
	std::string formNames[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	AForm* (Intern::*formFuncs[3])(std::string const &target) = {&Intern::makeRobotomyRequestForm, &	Intern::makePresidentialPardonForm, &Intern::makeShrubberyCreationForm};
	for (int i = 0; i < 3; i++)
	{
		if (formName == formNames[i])
		{
			std::cout << "Intern creates " << formName << std::endl;
			return (this->*formFuncs[i])(target);
		}
	}
	throw std::runtime_error("Form not found" + formName);
}