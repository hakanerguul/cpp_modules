#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	bot("Karga");

	bot.attack("Kartal");
	bot.takeDamage(2);
	bot.beRepaired(1);
	bot.takeDamage(25);
	bot.highFivesGuys();
	return (0);
}
