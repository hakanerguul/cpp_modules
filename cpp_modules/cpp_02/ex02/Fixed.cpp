#include "Fixed.hpp"

const int Fixed::fractionalBits = 8;

Fixed &Fixed::operator=(const Fixed &src)
{
	if (this != &src)
		this->value = src.getRawBits();

	return *this;
}

bool Fixed::operator==(Fixed right) const
{
	return (this->toFloat() == right.toFloat());
}

bool Fixed::operator!=(Fixed right) const
{
	return (this->toFloat() != right.toFloat());
}

bool	Fixed::operator>(Fixed right) const
{
	return (this->toFloat() > right.toFloat());
}

bool	Fixed::operator<(Fixed right) const
{
	return (this->toFloat() < right.toFloat());
}

bool	Fixed::operator>=(Fixed right) const
{
	return (this->toFloat() >= right.toFloat());
}

bool	Fixed::operator<=(Fixed right) const
{
	return (this->toFloat() <= right.toFloat());
}

float	Fixed::operator+(Fixed right) const
{
	return (this->toFloat() + right.toFloat());
}

float	Fixed::operator-(Fixed right) const
{
	return (this->toFloat() - right.toFloat());
}

float	Fixed::operator*(Fixed right) const
{
	return (this->toFloat() * right.toFloat());
}

float	Fixed::operator/(Fixed right) const
{
	return (this->toFloat() / right.toFloat());
}

Fixed	Fixed::operator++()
{
	this->value++;
	return (*this);
}

Fixed	Fixed::operator--()
{
	this->value--;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp = *this;

	++this->value;
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp = *this;

	--this->value;
	return (tmp);
}

Fixed::Fixed(): value(0)
{
	//std::cout << "Default Constructor" << std::endl;
}

Fixed::Fixed(const int input)
{
	this->value = input << this->fractionalBits;
}

Fixed::Fixed(const float input)
{
	this->value = roundf(input * (1 << this->fractionalBits));
}

Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
}

Fixed::~Fixed()
{
	//std::cout << "Fixed Deconstructor" << std::endl;
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

Fixed	&Fixed::min(Fixed &left, Fixed &right)
{
	if (left.toFloat() <= right.toFloat())
		return (left);
	else
		return (right);
}

const Fixed	&Fixed::min(const Fixed &left,const Fixed &right)
{
	if (left.toFloat() <= right.toFloat())
		return (left);
	else
		return (right);
}

Fixed	&Fixed::max(Fixed &left, Fixed &right)
{
	if (left.toFloat() >= right.toFloat())
		return (left);
	else
		return (right);
}

const Fixed	&Fixed::max(const Fixed &left,const Fixed &right)
{
	if (left.toFloat() >= right.toFloat())
		return (left);
	else
		return (right);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &right)
{
	o << right.toFloat();
	return (o);
}