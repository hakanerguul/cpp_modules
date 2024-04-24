#include "Serialization.hpp"

Serialization::Serialization()
{
   // std::cout << BLUE << "Constructor Called" << RESET << std::endl;
}
Serialization::Serialization(const::Serialization &copy)
{
    *this = copy;
    //std::cout << BLUE << "Copy Constructor Called" << RESET << std::endl;
}
Serialization & Serialization::operator=(Serialization const &rhs)
{
    if (this != &rhs)
    {}
    return(*this);
    //std::cout << BLUE << "operator= Called" << RESET << std::endl;
}
Serialization::~Serialization()
{
        //std::cout << BLUE << "Destructor Called" << RESET << std::endl;

}

uintptr_t	Serialization::serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *Serialization::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}