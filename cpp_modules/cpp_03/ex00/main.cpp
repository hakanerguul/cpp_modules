#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	bot("Karga");

	bot.attack("Kartal");
	bot.takeDamage(2);
	bot.beRepaired(1);
	bot.takeDamage(10);
	return (0);
}
