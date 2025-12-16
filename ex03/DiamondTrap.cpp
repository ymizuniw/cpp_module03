
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <DiamondTrap.hpp>

DiamondTrap::DiamondTrap(std::string name)
    : name_(name), ClapTrap(name.append("_clap_name"), DEFAULT_FRAGTRAP_HP,
                            DEFAULT_SCAVTRAP_ENERGY, DEFAULT_FRAGTRAP_ATTACK),
      ScavTrap(name), FragTrap(name) {}

void DiamondTrap::attack(const std::string &target) {
  ScavTrap::attack(target);
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
    : ClapTrap(other), ScavTrap(other), FragTrap(other) {
  std::cout << "DiamondTrap::Copy-constructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other) {
  if (this != &other) {
    *this = other;
  }
  return (*this);
}

DiamondTrap::~DiamondTrap(void) {
  std::cout << "DiamondTrap::Destructor called" << std::endl;
}

void DiamondTrap::takeDamage(unsigned int amount) {
  ClapTrap::takeDamage(amount);
}

void DiamondTrap::beRepaired(unsigned int amount) {
  ClapTrap::beRepaired(amount);
}

// void beRepaired(unsigned int amount);
void DiamondTrap::whoAmI() {
  std::cout << "ClapTrap :" << Name_ << std::endl;
  std::cout << "DiamondTrap: " << name_ << std::endl;
}

#ifdef DEBUG
void print_status(ClapTrap::print_status(););
#endif
