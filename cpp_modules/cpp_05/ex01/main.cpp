#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat bureaucrat1("Bureaucrat1", 6);
	Bureaucrat bureaucrat2("Bureaucrat2", 140);
	Form form1("Form1", 1, 1);
	Form form2("Form2", 150, 150);

	std::cout << bureaucrat1 << bureaucrat2 << form1 << form2;
	bureaucrat1.signForm(form1);
	bureaucrat2.signForm(form2);
	std::cout << form1 << form2;
	return(0);
}
