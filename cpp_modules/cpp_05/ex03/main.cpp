#include "Intern.hpp"

int main()
{
	Intern someRandomIntern;
	AForm* rrf;
	Bureaucrat b("Bureaucrat", 1);
	try
	{
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		b.signForm(*rrf);
		b.executeForm(*rrf);
		delete rrf;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}