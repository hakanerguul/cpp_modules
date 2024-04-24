#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &copyObj);
		ScavTrap &operator = (const ScavTrap &copyObj);
		~ScavTrap();

		void	attack(const std::string& target);
		void	guardGate(void);
};

#endif
