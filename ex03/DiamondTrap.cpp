#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap( std::string const & name):
	ClapTrap( name + "_clap_name" )
{
	_name = name;
	_hitPoints = FragTrap::_hitPoints;
	std::cout << "DiamondTrap " << _name << " is constructed" << std::endl;
	std::cout << *this << std::endl;
}
DiamondTrap::DiamondTrap( DiamondTrap const & diamondTrap ):
	FragTrap( diamondTrap )
{	std::cout << "DiamondTrap is constructed from "
	          << diamondTrap._name << std::endl;
	std::cout << *this << std::endl;
}
DiamondTrap::~DiamondTrap()
{	std::cout << "DiamondTrap " << _name << " is destructed" << std::endl;
}
void	DiamondTrap::attack( std::string const & target )
{
	if ( _energyPoints < _attackDamage )
	{	std::cout << "DiamondTrap " << _name << " failed to attack " << target
		          << " because he is tired" << std::endl;
		return;
	}
	std::cout << "DiamondTrap " << _name << " attacks " << target
	          << ", causing " << _attackDamage << " points of damage!"
              << std::endl;
	_energyPoints -= _attackDamage;
}
