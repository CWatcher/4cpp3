#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap( std::string const & name):
	ClapTrap( name, 100, 50, 20 )
{	std::cout << "FragTrap " << _name << " is constructed" << std::endl;
}
FragTrap::FragTrap( FragTrap const & FragTrap )
{
	std::cout << "FragTrap is being constructed from "
	          << FragTrap._name << std::endl;
	*this = FragTrap;
	std::cout << *this << std::endl;
	}
FragTrap::~FragTrap() {
	std::cout << "FragTrap " << _name << " is destructed" << std::endl;
}
void				FragTrap::attack( std::string const & target )
{
	if ( _energyPoints < _attackDamage ) {
		std::cout << "FragTrap " << _name << " failed to attack " << target
		          << " because he is tired" << std::endl;
		return;
	}
	std::cout << "FragTrap " << _name << " attacks " << target
	          << ", causing " << _attackDamage << " points of damage!"
              << std::endl;
	_energyPoints -= _attackDamage;
}
void				FragTrap::guardGate() {
	std::cout << "FragTrap " << _name << " has enterred in Gate keeper mode "
	          << std::endl;
}
