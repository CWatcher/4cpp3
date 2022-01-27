#pragma once

#include "ClapTrap.hpp"
#include <string>

class ScavTrap: public ClapTrap
{
public:
	ScavTrap( std::string const & name = "scavTrap" );
	ScavTrap( ScavTrap const & );
	~ScavTrap();
	void				attack( std::string const & target );
	void				guardGate();
};
