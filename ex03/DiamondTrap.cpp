
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <DiamondTrap.hpp>
#include <iostream>

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
  std::cout << "[LOG] ";
  if (HitPoints_ < amount)
    HitPoints_ = 0;
  else
    HitPoints_ -= amount;
  takeDamage_log(this->Name_, amount);
}

void DiamondTrap::beRepaired(unsigned int amount) {
  std::cout << "[LOG] ";
  if (HitPoints_ == 0) {
    std::cout << Name_ << " is HP of 0. cannot repair!" << std::endl;
    return;
  }
  if (EnergyPoints_ > 0)
    EnergyPoints_ = EnergyPoints_ - static_cast<unsigned int>(1);
  else {
    print_msg("Energy point is not enough! cannot repair!");
    return;
  }
  if (static_cast<unsigned int>(DEFAULT_FRAGTRAP_HP) - amount < HitPoints_)
    HitPoints_ = static_cast<unsigned int>(DEFAULT_FRAGTRAP_HP);
  else
    HitPoints_ += amount;
  beRepaired_log(Name_, amount);
}

// void beRepaired(unsigned int amount);
void DiamondTrap::whoAmI() {
  std::cout << "ClapTrap :" << ClapTrap::Name_ << std::endl;
  std::cout << "DiamondTrap: " << Name_ << std::endl;
}

#ifdef DEBUG
void DiamondTrap::print_status(void) { ClapTrap::print_status(); }
#endif
