#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap( std::string const & name):
	_name( name ), _hitPoints( 10 ), _energyPoints( 10 ), _attackDamage( 0 )
{
	std::cout << "Construction: " << _name  << std::endl;
}
ClapTrap::ClapTrap( ClapTrap const & clapTrap )
{
	std::cout << "Construction from: " << clapTrap._name << std::endl;
	*this = clapTrap;
}
ClapTrap::~ClapTrap()
{
	std::cout << "Destruction: " << _name << std::endl;
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
void				ClapTrap::setName( std::string name )
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
	std::cout << "Assignment: " << _name << " from " << clapTrap._name
	          << std::endl;
	_name = clapTrap.getName();
	_hitPoints = clapTrap.getHitPoints();
	_hitPoints = clapTrap.getEnergyPoints();
	_hitPoints = clapTrap.getAttackDamage();
	return *this;
}
