#ifndef SERIALIZATION
#define SERIALIZATION

#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define BLUE    "\033[34m" 
#define YELLOW  "\033[33m"
#define RESET		"\033[0m"
#include <iostream>

struct Data
{
    std::string str;
    int         i;
};

class Serialization
{
    public:
    Serialization();
    Serialization(const Serialization &copy);
    Serialization &operator=(Serialization const &rhs);
    ~Serialization();
    
    static uintptr_t	serialize(Data *ptr);
	static Data *deserialize(uintptr_t raw);
};


#endif