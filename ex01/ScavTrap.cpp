#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(std::string name)
    : ClapTrap(name, SCAVTRAP_DEFAULT_HP, SCAVTRAP_DEFAULT_ENERGY,
               SCAVTRAP_DEFAULT_ATTACK) {
  print_msg("ScavTrap constructor called");
}

// ClapTrap::ClapTrap(const ClapTrap &other)
ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
  if (this != &other)
    *this = other;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
  if (this != &other)
    ClapTrap::operator=(other);
  return (*this);
}

ScavTrap::~ScavTrap(void) { print_msg("ScavTrap default destructor called."); }

void ScavTrap::guradGate(void) {
  std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

#ifdef DEBUG
void ScavTrap::print_status(void) { ClapTrap::print_status(); }
#endif
