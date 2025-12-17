#include <ClapTrap.hpp>
#include <ScavTrap.hpp>
#include <iostream>

ScavTrap::ScavTrap(std::string name)
    : ClapTrap(name, DEFAULT_SCAVTRAP_HP, DEFAULT_SCAVTRAP_ENERGY,
               DEFAULT_SCAVTRAP_ATTACK) {
  print_msg("ScavTrap constructor called");
}

// ClapTrap::ClapTrap(const ClapTrap &other)
ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
  print_msg("ScavTrap copy-constructor called");
  if (this != &other)
    *this = other;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
  if (this != &other)
    ClapTrap::operator=(other);
  return (*this);
}

ScavTrap::~ScavTrap(void) { print_msg("ScavTrap default destructor called."); }

void ScavTrap::attack(const std::string &target) {
  std::cout << "[LOG] ";
  if (HitPoints_ == 0) {
    std::cout << Name_ << " is HP of 0. cannot attack!" << std::endl;
    return;
  }
  if (EnergyPoints_ > 0) {
    EnergyPoints_ = EnergyPoints_ - static_cast<unsigned int>(1);
    std::cout << Name_ << " attacks " << target << std::endl;
  } else
    print_msg("Energy is not enough. cannot attack!");
}

void ScavTrap::takeDamage(unsigned int amount) {
  std::cout << "[LOG] ";
  if (HitPoints_ < amount)
    HitPoints_ = 0;
  else
    HitPoints_ -= amount;
  takeDamage_log(Name_, amount);
}

void ScavTrap::beRepaired(unsigned int amount) {
  std::cout << "[LOG] ";
  if (HitPoints_ == 0) {
    std::cout << Name_ << "is HP of 0. cannto repair!" << std::endl;
    return;
  }
  if (EnergyPoints_ > 0)
    EnergyPoints_ = EnergyPoints_ - static_cast<unsigned int>(1);
  else {
    print_msg("Energy point is not enough. cannot repair!");
    return;
  }
  if (static_cast<unsigned int>(DEFAULT_CLAPTRAP_HP) - amount < HitPoints_)
    HitPoints_ = static_cast<unsigned int>(DEFAULT_CLAPTRAP_HP);
  else
    HitPoints_ += amount;
  beRepaired_log(Name_, amount);
}

void ScavTrap::guradGate(void) {
  std::cout << "[LOG] ";
  std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

#ifdef DEBUG
void ScavTrap::print_status(void) { ClapTrap::print_status(); }
#endif
