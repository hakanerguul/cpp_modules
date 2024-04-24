#include "Serialization.hpp"


int main()
{
	Data data;
    Data *desValue;
    uintptr_t sValue;
	data.str = "This is the string value";
	// data.i = 100;

	
	sValue = Serialization::serialize(&data);
	std::cout << BLUE << "sValue   : " << RESET <<  sValue << std::endl;

	desValue = Serialization::deserialize(sValue);
	std::cout <<  BLUE << "&data    : " << RESET << &data << std::endl;
	std::cout <<  BLUE << "desValue : " << RESET << desValue << std::endl;
    std::cout << "__________________________________________" << std::endl; 
	std::cout << GREEN << "str value is : " <<RESET << desValue->str << GREEN <<"\ni value is   : " << RESET << desValue->i << std::endl;	
	//std::cout << GREEN << "str value is : " <<RESET << desValue->str << RESET <<std::endl;	
    return (0);
}
