#pragma once

#include "ClapTrap.hpp"
#include <string>

class FragTrap: public ClapTrap
{
public:
	FragTrap( std::string const & name = "fragTrap" );
	FragTrap( FragTrap const & );
	~FragTrap();
	void				attack( std::string const & target );
	void				highFivesGuys();
};
