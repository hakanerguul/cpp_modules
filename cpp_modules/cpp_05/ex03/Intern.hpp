#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
public:
    Intern();
    ~Intern();

    AForm *makeRobotomyRequestForm(std::string const &target);
    AForm *makePresidentialPardonForm(std::string const &target);
    AForm *makeShrubberyCreationForm(std::string const &target);
    AForm *makeForm(std::string const &formName, std::string const &target);

    class FormNotFoundException : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };
};

#endif