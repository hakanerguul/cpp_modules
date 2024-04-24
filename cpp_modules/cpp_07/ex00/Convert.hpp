#ifndef CONVERT_HPP
#define CONVERT_HPP

#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define BLUE    "\033[34m" 
#define YELLOW  "\033[33m"
#define RESET		"\033[0m"

#include <iostream>
#include <string>
#include <limits>
#include <cstdlib>

class Convert
{
    public:

        Convert ();
        Convert (const Convert &copy);
        Convert &operator= (const Convert &rhs);
        ~Convert();

        bool convertable(std::string val);
        bool isNum(std::string val);
        bool isChar(std::string val);
        bool isFloat(std::string val);
        bool isDouble(std::string val);

        static bool checkInput(std::string str);
		static void	startConvert(std::string val);
		static void	toChar(std::string val);
		static void	toInt(std::string val);
		static void	toFloat(std::string val);
		static void	toDouble(std::string val);
};

#endif