#pragma once

#include "FragTrap.hpp"
#include <string>

class DiamondTrap: public FragTrap
{
public:
	DiamondTrap( std::string const & name = "diamondTrap" );
	DiamondTrap( DiamondTrap const & );
	~DiamondTrap();
	void				attack( std::string const & target );
};
