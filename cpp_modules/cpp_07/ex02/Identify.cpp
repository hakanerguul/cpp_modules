
#include "Identify.hpp"

Base*   generate( void )
{
    if (rand() % 3 == 0 )
        return ( new A );
    else if (rand() % 3 == 1 )
        return ( new B );
    else
        return ( new C );
}

void	identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "The Class is A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "The Class is B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "The Class is C" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "The Class is AAAAA" << std::endl;
	}
	catch (std::exception &e)
	{
		try
		{
			B &b = dynamic_cast<B&>(p);
			(void)b;
			std::cout << "The Class is BBB" << std::endl;
		}
		catch (std::exception &e)
		{
			try
			{
				C &c = dynamic_cast<C&>(p);
				(void)c;
				std::cout << "The Class is CCCC" << std::endl;
			}
			catch (std::exception &e)
			{
				std::cout << "Not A, B or C" << std::endl;
			}
		}
	}
}