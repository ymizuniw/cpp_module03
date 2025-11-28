#include "DiamondTrap.hpp"

//name:same as claptrap
//hp fragtrap
//energy scavtrap
//attack amount fragtrap
//attac() scavtrap
DiamondTrap::DiamondTrap(std::string name):
    name_(name),
 ClapTrap(name.append("_clap_name")),
ScavTrap(name.append("_clap_name")),
FragTrap(name.append("_clap_name"))
{
    
    print_msg("DiamondTrap constructed.");
}

DiamondTrap::DiamondTrap(DiamondTrap const &other):
 ClapTrap(other.getName(), FLAGTRAP_DEFAULT_HP, SCAVTRAP_DEFAULT_ENERGY, FLAGTRAP_DEFAULT_ATTACK),
ScavTrap(other.getName()),
FragTrap(other.getName())
{
    print_msg("DiamondTrap copy constructor called.");    
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
    if (this!=&other)
    {
        name_ = other.name_;
        ClapTrap::operator=(other);
        ScavTrap::operator=(other);
        FragTrap::operator=(other);
    }
    return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
    print_msg("DiamondTrap destructor called.");
}

 void DiamondTrap::whoAmI(void)
 {
    std::cout << "ClapTrap: " << getName() << std::endl;
    std::cout << "DiamondTrap: " << name_ << std::endl;
 }