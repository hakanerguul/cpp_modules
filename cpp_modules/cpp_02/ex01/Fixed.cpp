#include "Fixed.hpp"

const int Fixed::fractionalBits = 8;

Fixed::Fixed(): value(0)
{
	std::cout << "Default Constructor" << std::endl;
}

Fixed::Fixed(const int input)
{
	std::cout << "Int Constructor" << std::endl;
	this->value = input << this->fractionalBits;
}

Fixed::Fixed(const float input)
{
	std::cout << "Float Constructor" << std::endl;
	this->value = roundf(input * (1 << this->fractionalBits));
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy Constructor" << std::endl;
	*this = copy;
}

Fixed::~Fixed()
{
	std::cout << "Fixed Deconstructor" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &src)
{
	std::cout << "Assignation operator" << std::endl;
	if (this != &src)
		this->value = src.getRawBits();

	return *this;
}

float	Fixed::toFloat(void)const
{
	return ((float)this->value / (float)(1 << this->fractionalBits));
}

int	Fixed::toInt(void)const
{
	return (this->value >> this->fractionalBits);
}

int	Fixed::getRawBits(void)const
{
	return (this->value);
}

void	Fixed::setRawBits(int const raw)
{
	this->value = raw;
}


std::ostream	&operator<<(std::ostream &o, Fixed const &fixed)
{
	o << fixed.toFloat();
	return (o);
}