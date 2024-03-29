#include "ClapTrap.hpp"
#include <iostream>
#include <sstream>

ClapTrap::ClapTrap( std::string const & name):
	_name( name ), _hitPoints( 10 ), _energyPoints( 10 ), _attackDamage( 0 )
{
	std::cout << "ClapTrap " << _name << " is constructed" << std::endl;
	std::cout << *this << std::endl;
}
ClapTrap::ClapTrap( ClapTrap const & clapTrap )
{
	std::cout << "ClapTrap is being constructed from " << clapTrap._name
	          << std::endl;
	*this = clapTrap;
	std::cout << *this << std::endl;
}
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " is destructed" << std::endl;
}
std::string			ClapTrap::getName() const
{
	return _name;
}
int					ClapTrap::getHitPoints() const
{
	return _energyPoints;
}
int					ClapTrap::getEnergyPoints() const
{
	return _energyPoints;
}
int					ClapTrap::getAttackDamage() const
{
	return _attackDamage;
}
void				ClapTrap::setName( std::string const & name )
{
	_name = name;
}
void				ClapTrap::setHitPoints( int hitPoints )
{
	_hitPoints = hitPoints;
}
void				ClapTrap::setEnergyPoints( int energyPoints )
{
	_energyPoints = energyPoints;
}
void				ClapTrap::setAttackDamage( int attackDamage )
{
	_attackDamage = attackDamage;
}
ClapTrap const & 	ClapTrap::operator=( ClapTrap const & clapTrap )
{
	std::cout << "ClapTrap " << _name << " is assigned from " << clapTrap._name
	          << std::endl;
	_name = clapTrap.getName();
	_hitPoints = clapTrap.getHitPoints();
	_energyPoints = clapTrap.getEnergyPoints();
	_attackDamage = clapTrap.getAttackDamage();
	return *this;
}
					ClapTrap::operator std::string() const
{
	std::stringstream ss;

	ss << "ClapTrap "      << _name         << ":"
	   << " hitPoints "    << _hitPoints    << ", "
	   << " energyPoints " << _energyPoints << ", "
	   << " hitPoints "    << _attackDamage;
	return ss.str();
}
void				ClapTrap::attack( std::string const & target )
{
	if ( _energyPoints < _attackDamage ) {
		std::cout << "ClapTrap " << _name << " failed to attack " << target
		          << " because he is tired"
		          << std::endl;
		return;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target
	          << ", causing " << _attackDamage << " points of damage!"
              << std::endl;
	_energyPoints -= _attackDamage;
}
void				ClapTrap::takeDamage( unsigned int amount )
{
	std::cout << "ClapTrap " << _name << " takes " << amount
	          << " points of damage"
	          << std::endl;
	_hitPoints -= amount;
}
void				ClapTrap::beRepaired( unsigned int amount )
{
	std::cout << "ClapTrap " << _name << " is repaired by " << amount
	          << " hit points"
	          << std::endl;
}

std::ostream&	operator<<( std::ostream &os, ClapTrap const &clapTrap )
{
	return os << ( std::string )clapTrap;
}
