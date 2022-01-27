#pragma once

#include "FragTrap.hpp"
#include <string>

class DiamondTrap: public FragTrap
{
public:
	DiamondTrap( std::string const & name = "diamondTrap" );
	DiamondTrap( DiamondTrap const & );
	~DiamondTrap();
	DiamondTrap const & operator=( DiamondTrap const & );
	void				attack( std::string const & target );
};
std::ostream&	operator<<( std::ostream &, DiamondTrap const & );

