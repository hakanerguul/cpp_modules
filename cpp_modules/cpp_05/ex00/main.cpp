#include "Bureaucrat.hpp"

int main()
{
	try{
		Bureaucrat b1("b1", 160);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	Bureaucrat b2("b2", 1);
	try{
		b2.incrementGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	Bureaucrat b3("b3", 150);
	try{
		b3.decrementGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << b2 << std::endl;
	std::cout << b3 << std::endl;
	Bureaucrat b4("b4", 2);
	Bureaucrat b5(b4);
	std::cout << b4 << std::endl;
	std::cout << b5 << std::endl;
	Bureaucrat b6("b6", 3);
	return 0;
}
