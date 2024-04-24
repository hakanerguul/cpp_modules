
#include "Convert.hpp"

int main(int ac, char **av)
{
    Convert object;
    if (ac == 2)
    {
        if (av[1][0] && object.convertable(av[1]))
        {
            Convert::startConvert(av[1]);
            return(0);
        }
        std::cout << RED << "Error : Inavlid Arguments." << RESET << std::endl;
        return (1);
    }
    std::cout << RED << "Inavlid Arguments :: Usage : ./Convert <val>" << RESET << std::endl;
}