#include "Convert.hpp"

Convert::Convert()
{
   // std::cout << BLUE << "Constructor Called" << RESET << std::endl;
}
Convert::Convert(Convert const &copy)
{
    *this = copy;
    //std::cout << BLUE << "Copy Constructor Called" << RESET << std::endl;
}
Convert &Convert::operator=(Convert const &rhs)
{
    if (this != &rhs)
    {}
    return(*this);
    //std::cout << BLUE << "operator= Called" << RESET << std::endl;
}
Convert::~Convert()
{
    //std::cout << BLUE << "Destructor Called" << RESET << std::endl;
}
//----------------------------------------------------------------

int count_u(std::string s, char c) {
  int count = 0;

  for (size_t i = 0; i < s.size(); i++)
    if (s[i] == c) count++;

  return count;
}

bool Convert::isNum(std::string val)
{
    if (((val.find_first_not_of("012345678") == std::string::npos)
        || (val.find_first_not_of("-0123456789") == std::string::npos && val[0] == '-')
        || (val.find_first_not_of("+0123456789") == std::string::npos && val[0] == '+')) 
        && (count_u(val, '-') < 2 || count_u(val, '+') < 2))
            return true;
    return false;
}
bool Convert::isFloat(std::string val)
{
    if (((val.find_first_not_of("012345678.f") == std::string::npos)
        || (val.find_first_not_of("-0123456789.f") == std::string::npos && val[0] == '-')
        || (val.find_first_not_of("+0123456789.f") == std::string::npos && val[0] == '+'))
        && (count_u(val, '-') < 2 || count_u(val, '+') < 2))
        return true;
    return false;
}
bool Convert::isDouble(std::string val)
{
    if (((val.find_first_not_of("012345678.") == std::string::npos)
        || (val.find_first_not_of("-0123456789.") == std::string::npos && val[0] == '-')
        || (val.find_first_not_of("+0123456789.") == std::string::npos && val[0] == '+'))
        && (count_u(val, '-') < 2 || count_u(val, '+') < 2))
        return true;
    return false;
}
bool Convert::isChar(std::string val)
{
    if(val != "nan" && val != "nanf" && val != "inf" && val != "inff" && val != "+inf" && val != "+inff" && val != "-inf" && val != "-inff" && val.length() != 1)
        if(val.find_first_not_of("0123456789.+-f") != std::string::npos)
            return false;
    return true;
}

bool Convert::checkInput(std::string str)
{
    if(str.find('-') != std::string::npos || str.find('+') != std::string::npos)
        if((count_u(str, '-') > 1 || count_u(str, '+') > 1) || (count_u(str, '-') + count_u(str, '+') >1 ))
            return false;

    if(str.find('.') != std::string::npos)
        if(count_u(str, '.') > 1)
            return false;
    
    if(str.find('f') != std::string::npos && str.length() > 1)
        if(count_u(str, 'f') > 2)
            return false;

    if(str != "nan" && str != "nanf" && str != "inf" && str != "inff" && str != "+inf" && str != "+inff" && str != "-inf" && str != "-inff" && str.length() != 1)
        if(str.find_first_not_of("0123456789.+-f") != std::string::npos)
            return false;
        
    return true;
}

bool Convert::convertable(std::string val)
{
    bool check = false;
    check = Convert::checkInput(val);
    if(check == false)
        return false;
    if (isNum(val) || isChar(val)|| isFloat(val) || isDouble(val))
        return true;
    return false;
}
//===========================================================================================================================
void Convert::toInt(std::string val)
{
    int number = 0;
    if(val == "nan" || val == "nanf" || val == "inf" || val == "inff" || val == "+inf" || val == "+inff" || val == "-inf" || val == "-inff")
    {
        std::cout << "int: impossible" << std::endl;
        return ;
    }
    try
    {    
        if (val.length() == 1 && !isdigit(val[0]))
            number = static_cast<int>(val[0]);
        else
        {
            const long long number2 = std::strtoll(val.c_str(), NULL, 10);
            if (val.c_str() == NULL)
				throw std::invalid_argument("No Conversion Possible");
            if (number2 < std::numeric_limits<int>::min() || number2 > std::numeric_limits<int>::max())
				throw std::out_of_range("Out Of Range");
            number = static_cast<int>(number2);    
        }
        std::cout << "INT : " << number <<  std::endl;  
    }
    catch(const std::exception &e)
    {
        std::cerr << RED << "int: impossible" << RESET << std::endl;
		return ;
    }
}
//---------------------------------------------------------------
void Convert::toChar(std::string val)
{
    char ch = 0;
    try
    {
        if (val.length() == 1 && !isdigit(val[0]))
            ch = val[0];
        else
        {
            const long long number2 = std::strtoll(val.c_str(), NULL, 10);
            if (val.c_str() == NULL)
				throw std::invalid_argument("no conversion possible");
            if (number2 < std::numeric_limits<int>::min() || number2 > std::numeric_limits<int>::max())
				throw std::out_of_range("out of range");
            ch = static_cast<char>(number2);
        }
    }
    catch(const std::exception& e)
	{
		std::cerr << "char: impossible" << '\n';
		return ;
	}
    if (isprint(ch))
        	std::cout << "char: '" << ch << "'" << std::endl;
    else
		std::cout << "char: Non displayable" << std::endl;

}
//----------------------------------------------------------------
void Convert::toFloat(std::string val)
{
	float number = 0;
	if (val.length() == 1 && !isdigit(val[0]))
		number = static_cast<float>(val[0]);
	else
		number = std::atof(val.c_str());
	if (number - static_cast<int>(number) == 0)
		std::cout << "float: " << number << ".0f" << std::endl;
	else
		std::cout << "float: " << number << "f" << std::endl;
}
//----------------------------------------------------------------

void Convert::toDouble(std::string val)
{
	double number = 0;
	if (val.length() == 1 && !isdigit(val[0]))
		number = static_cast<double>(val[0]);
	else
		number = std::atof(val.c_str());
	if (number - static_cast<int>(number) == 0)
		std::cout << "double: " << number << ".0" << std::endl;
	else
		std::cout << "double: " << number << std::endl; 
}
void Convert::startConvert(std::string val)
{
    toInt(val);
    toChar(val);
    toFloat(val);
    toDouble(val);
}
