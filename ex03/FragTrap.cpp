#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
    : ClapTrap(name, FLAGTRAP_DEFAULT_HP, FLAGTRAP_DEFAULT_ENERGY,
               FLAGTRAP_DEFAULT_ATTACK) {
  print_msg("FragTrap constructor called");
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
  print_msg("FragTrap constructor called");
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
  if (this != &other)
    ClapTrap::operator=(other);
  return (*this);
}

FragTrap::~FragTrap(void) { print_msg("FragTrap destructor called."); }

void FragTrap::highFiceGuys(void) { print_msg("High five!"); }
