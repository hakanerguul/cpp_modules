#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Unknown")
{
	_hitPts = 100;
	_energyPts = 100;
	_attackDmg = 30;
	std::cout << "FragTrap: Default constructor is called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hitPts = 100;
	this->_energyPts = 100;
	this->_attackDmg = 30;
	std::cout << "FragTrap: Name constructor is called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copyObj)
{
	std::cout << "FragTrap: Copy constructor is called" << std::endl;
	*this = copyObj;
}

FragTrap	&FragTrap::operator = (const FragTrap &copyObj)
{
	std::cout << "FragTrap: Copy assignment constructor is called" << std::endl;
	if (this != &copyObj)
	{
		_name = copyObj._name;
		_hitPts = copyObj._hitPts;
		_energyPts = copyObj._energyPts;
		_attackDmg = copyObj._attackDmg;
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap: Destructor is called" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "HighFivesGuys Brotachi " << std::endl;
}
