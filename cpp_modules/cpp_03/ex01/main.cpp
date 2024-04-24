#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	bot("Karga");

	bot.attack("Kartal");
	bot.takeDamage(2);
	bot.beRepaired(1);
	bot.takeDamage(25);
	bot.guardGate();
	return (0);
}
