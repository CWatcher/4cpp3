#include <string>

class ClapTrap
{
public:
	ClapTrap( std::string const & name = "clapTrap" );
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
	void				attack( std::string const & target );
private:
	std::string	_name;
	int			_hitPoints;
	int			_energyPoints;
	int			_attackDamage;
};
