#include "FlagTrap.hpp"

FlagTrap::FlagTrap(std::string name) : ClapTrap(name)
{
    HitPoints_=FLAGTRAP_DEFAULT_HP;
    EnergyPoints_=FLAGTRAP_DEFAULT_ENERGY;
    AttackDamage_=FLAGTRAP_DEFAULT_ATTACK;
    print_msg("ScavTrap constructor called");
}

FlagTrap::FlagTrap(const FlagTrap &other) : ClapTrap(other)
{
    print_msg("FlagTrap constructor called");
}

FlagTrap &FlagTrap::operator=(const FlagTrap &other)
{
    if (this!=&other)
        ClapTrap::operator=(other);
    return (*this);
}

FlagTrap::~FlagTrap(void)
{
    print_msg("FlagTrap destructor called.");
}

void FlagTrap::highFiceGuys(void)
{
    print_msg("High five!");
}
