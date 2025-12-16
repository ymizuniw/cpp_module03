#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

FragTrap::FragTrap(std::string name)
    : ClapTrap(name, DEFAULT_FRAGTRAP_HP, DEFAULT_FRAGTRAP_ENERGY,
               DEFAULT_FRAGTRAP_ATTACK) {
  print_msg("FragTrap constructor called");
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
  print_msg("FragTrap copy-constructor called");
  if (this != &other)
    *this = other;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
  if (this != &other)
    ClapTrap::operator=(other);
  return (*this);
}

FragTrap::~FragTrap(void) { print_msg("FragTrap destructor called."); }

void FragTrap::attack(const std::string &target) {
  std::cout << "[LOG] ";
  if (HitPoints_ == 0) {
    std::cout << Name_ << "is HP of 0";
    return;
  }
  if (EnergyPoints_ > 0) {
    EnergyPoints_ = EnergyPoints_ - static_cast<unsigned int>(1);
    std::cout << "FragTrap::" << Name_ << " attacks " << target << std::endl;
  } else
    print_msg("Energy is not enough.");
}

void FragTrap::takeDamage(unsigned int amount) {
  std::cout << "[LOG] ";
  if (HitPoints_ < amount)
    HitPoints_ = 0;
  else
    HitPoints_ -= amount;
  takeDamage_log(Name_, amount);
}

void FragTrap::beRepaired(unsigned int amount) {
  std::cout << "[LOG] ";
  if (HitPoints_ == 0) {
    std::cout << Name_ << "is HP of 0";
    return;
  }
  if (EnergyPoints_ > 0)
    EnergyPoints_ = EnergyPoints_ - static_cast<unsigned int>(1);
  else {
    print_msg("Energy point is not enough");
    return;
  }
  if (static_cast<unsigned int>(DEFAULT_CLAPTRAP_HP) - amount < HitPoints_)
    HitPoints_ = static_cast<unsigned int>(DEFAULT_CLAPTRAP_HP);
  else
    HitPoints_ += amount;
  beRepaired_log(Name_, amount);
}

void FragTrap::highFiveGuys(void) {
  std::cout << "[LOG] ";
  std::cout << "highFive" << std::endl;
}

#ifdef DEBUG
void FragTrap::print_status(void) { ClapTrap::print_status(); }
#endif