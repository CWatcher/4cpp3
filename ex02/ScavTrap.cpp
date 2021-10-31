#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap( std::string const & name):
	ClapTrap( name, 100, 50, 20 )
{	std::cout << "ScavTrap " << _name << " is constructed" << std::endl;
}
ScavTrap::ScavTrap( ScavTrap const & ScavTrap )
{
	std::cout << "ScavTrap is being constructed from "
	          << ScavTrap._name << std::endl;
	*this = ScavTrap;
	std::cout << *this << std::endl;
	}
ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << _name << " is destructed" << std::endl;
}
void				ScavTrap::attack( std::string const & target )
{
	if ( _energyPoints < _attackDamage ) {
		std::cout << "ScavTrap " << _name << " failed to attack " << target
		          << " because he is tired" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << _name << " attacks " << target
	          << ", causing " << _attackDamage << " points of damage!"
              << std::endl;
	_energyPoints -= _attackDamage;
}
void				ScavTrap::guardGate() {
	std::cout << "ScavTrap " << _name << " has enterred in Gate keeper mode "
	          << std::endl;
}
