#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &copyObj);
		FragTrap &operator = (const FragTrap &copyObj);
		~FragTrap();

		void	highFivesGuys(void);
};

#endif
