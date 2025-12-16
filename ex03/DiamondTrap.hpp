#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

// name:same as claptrap
// hp fragtrap
// energy scavtrap
// attack amount fragtrap
// attac() scavtrap
class DiamondTrap : public ScavTrap, public FragTrap {
private:
  std::string name_;

public:
  DiamondTrap(std::string name);
  // DiamondTrap(std::string name, unsigned int HitPoints_, unsigned int
  // EnergyPoints_, unsigned int AttackDamage_);
  DiamondTrap(const DiamondTrap &other);
  DiamondTrap &operator=(const DiamondTrap &other);
  ~DiamondTrap(void);
  void whoAmI(void); // this and claptrap's name.
};

#endif
