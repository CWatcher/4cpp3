#pragma once

#include <string>
#include <ostream>

class ClapTrap
{
public:
	ClapTrap();
	ClapTrap( std::string const & name );
	ClapTrap( ClapTrap const & );
	~ClapTrap();
	std::string			getName() const;
	int 				getHitPoints() const;
	int 				getEnergyPoints() const;
	int 				getAttackDamage() const;
	void				setName( std::string );
	void				setHitPoints( int );
	void				setEnergyPoints( int );
	void				setAttackDamage( int );
	ClapTrap const & 	operator=( ClapTrap const & );
						operator std::string() const;
	void				attack( std::string const & target );
	void				takeDamage( unsigned int amount );
	void				beRepaired( unsigned int amount );	
protected:
	std::string	_name;
	int			_hitPoints;
	int			_energyPoints;
	int			_attackDamage;
	ClapTrap( std::string const & name,
	          int hitPoints, int energyPoints, int attackDamage );
};

std::ostream&	operator<<( std::ostream &, ClapTrap const & );
