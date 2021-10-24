#include "ClapTrap.hpp"
#include <iostream>

int main( void )
{
	ClapTrap ct;
	ClapTrap ct2("ct2");
	ct = ct2;
	return 0;
}
