#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <ClapTrap.hpp>
#include <FragTrap.hpp>
#include <ScavTrap.hpp>

// name:same as claptrap
// hp fragtrap
// energy scavtrap
// attack amount fragtrap
// attac() scavtrap
class DiamondTrap : public ScavTrap, public FragTrap {
private:
  std::string Name_;

public:
  DiamondTrap(std::string name);
  DiamondTrap(const DiamondTrap &other);
  DiamondTrap &operator=(const DiamondTrap &other);
  ~DiamondTrap(void);
  void attack(const std::string &target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
  void whoAmI(void); // this and claptrap's name.
#ifdef DEBUG
  void print_status(void);
#endif
};

#endif
