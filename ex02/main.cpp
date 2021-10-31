#include "FragTrap.hpp"
#include <iostream>

void attack(FragTrap &attacker, FragTrap &defender)
{
	attacker.attack(defender.getName());
	std::cout << attacker << std::endl;
	defender.takeDamage(attacker.getAttackDamage());
	std::cout << defender << std::endl;
	std::cout << std::endl;
}
int main( void )
{
	FragTrap st1;
	std::cout << std::endl;
	FragTrap st2("st2");
	std::cout << std::endl;
	FragTrap st3(st2);
	std::cout << std::endl;
	FragTrap st4 = st2;

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
