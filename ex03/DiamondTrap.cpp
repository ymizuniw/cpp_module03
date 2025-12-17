
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <DiamondTrap.hpp>
#include <iostream>

DiamondTrap::DiamondTrap(void) : ClapTrap(), ScavTrap(), FragTrap(), Name_() {
  std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
    : ClapTrap(name + "_clap_name", DEFAULT_FRAGTRAP_HP,
               DEFAULT_SCAVTRAP_ENERGY, DEFAULT_FRAGTRAP_ATTACK),
      ScavTrap(name), FragTrap(name), Name_(name) {
  std::cout << "DiamondTrap::Constructor called" << std::endl;
}

void DiamondTrap::attack(const std::string &target) {
  ScavTrap::attack(target);
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
    : ClapTrap(other), ScavTrap(other), FragTrap(other) {
  std::cout << "DiamondTrap::Copy-constructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other) {
  if (this != &other) {
    ClapTrap::operator=(other);
    ScavTrap::operator=(other);
    FragTrap::operator=(other);
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
  std::cout << "[LOG] ";
  std::cout << "ClapTrap :" << ClapTrap::Name_ << std::endl;
  std::cout << "[LOG] ";
  std::cout << "DiamondTrap: " << Name_ << std::endl;
}

#ifdef DEBUG
void DiamondTrap::print_status(void) { ClapTrap::print_status(); }
#endif
