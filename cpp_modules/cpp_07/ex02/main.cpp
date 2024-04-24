#include "Identify.hpp"

int     main( void )
{
    Base	*a = generate();
    Base	*b = generate();

    std::cout << "______________________________________________________" << std::endl;

    std::cout << "a* = "; identify( a );
    std::cout << "a& = "; identify( *a ); std::cout << std::endl;

    std::cout << "b* = "; identify( b );
    std::cout << "b& = "; identify( *b ); std::cout << std::endl;
    delete a;
    delete b;
    std::cout << "_______________________________________________________" << std::endl;

    Base*   c = generate();
    Base*   d = generate();
    std::cout << "c* = "; identify( c );
    std::cout << "c& = "; identify( *c ); std::cout << std::endl;

    std::cout << "d* = "; identify( d );
    std::cout << "d& = "; identify( *d ); std::cout << std::endl;
    std::cout << "_______________________________________________________" << std::endl;


    delete c;
    delete d;

    return (0);
}