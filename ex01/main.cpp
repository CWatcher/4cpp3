#include "ScavTrap.hpp"
#include <iostream>

int main( void )
{
	ScavTrap st1;
	ScavTrap st2("st2");
	ScavTrap st3(st2);
	ScavTrap st4 = st2;

	st1.setName("st1");
	st3.setName("st3");
	st4.setName("st4");
	
	std::cout << std::endl;

	st1.attack(st2.getName());
	st2.takeDamage(st1.getAttackDamage());
	st2.beRepaired(st1.getAttackDamage());
	st3.guardGate();

	std::cout << std::endl;
}
