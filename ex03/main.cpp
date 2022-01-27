#include "DiamondTrap.hpp"
#include <iostream>

void attack(DiamondTrap &attacker, DiamondTrap &defender)
{
	attacker.attack(defender.getName());
	std::cout << attacker << std::endl;
	defender.takeDamage(attacker.getAttackDamage());
	std::cout << defender << std::endl;
	std::cout << std::endl;
}
int main( void )
{
	// DiamondTrap dt1;
	// std::cout << std::endl;
	DiamondTrap dt2("dt2");
	std::cout << std::endl;
	// DiamondTrap dt3(dt2);
	// std::cout << std::endl;
	// DiamondTrap dt4 = dt2;

	// dt1.setName("dt1");
	// dt3.setName("dt3");
	// dt4.setName("dt4");
	
	// std::cout << std::endl;

	// attack(dt1, dt2);
	// attack(dt1, dt2);
	// attack(dt1, dt2);
	// dt2.beRepaired(dt1.getAttackDamage());
	// dt3.highFivesGuys();

	std::cout << std::endl;
}
