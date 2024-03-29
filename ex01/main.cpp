#include "ScavTrap.hpp"
#include <iostream>

void attack(ScavTrap &attacker, ScavTrap &defender)
{
	attacker.attack(defender.getName());
	std::cout << attacker << std::endl;
	defender.takeDamage(attacker.getAttackDamage());
	std::cout << defender << std::endl;
	std::cout << std::endl;
}
int main( void )
{
	ScavTrap st1;
	std::cout << std::endl;
	ScavTrap st2("st2");
	std::cout << std::endl;
	ScavTrap st3(st2);
	std::cout << std::endl;
	ScavTrap st4 = st2;

	st1.setName("st1");
	st3.setName("st3");
	st4.setName("st4");
	
	std::cout << std::endl;

	attack(st1, st2);
	attack(st1, st2);
	attack(st1, st2);
	st2.beRepaired(st1.getAttackDamage());
	st3.guardGate();

	std::cout << std::endl;
}
