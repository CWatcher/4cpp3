#include "ClapTrap.hpp"
#include <iostream>

int main( void )
{
	ClapTrap ct1;
	std::cout << std::endl;
	ClapTrap ct2("ct2");
	std::cout << std::endl;
	ClapTrap ct3(ct2);
	std::cout << std::endl;
	ClapTrap ct4 = ct2;

	ct1.setName("ct1");
	ct3.setName("ct3");
	ct4.setName("ct4");
	
	std::cout << std::endl;

	ct1.attack(ct2.getName());
	ct2.takeDamage(ct1.getAttackDamage());
	ct2.beRepaired(ct1.getAttackDamage());

	std::cout << std::endl;
}
