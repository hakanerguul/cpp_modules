#include "Fixed.hpp"

const int Fixed::frac_bits = 8;

Fixed::Fixed(void): value(0)
{
    std::cout << "Fixed Default Constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& item)
{
    std::cout << "Fixed Copy Constructor called" << std::endl;
    *this = item;
}

Fixed::~Fixed()
{
    std::cout << "Fixed Deconstructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &right)
{
    std::cout << "Fixed Assignation operator called" << std::endl;
	if (this != &right)
		this->value = right.getRawBits();

	return *this;
}

int Fixed::getRawBits(void)const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}


void    Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}