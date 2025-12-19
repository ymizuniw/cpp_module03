#include <ClapTrap.hpp>
#include <ScavTrap.hpp>
#include <iostream>

ScavTrap::ScavTrap(void)
    : ClapTrap("ScavTrap_default_name", DEFAULT_SCAVTRAP_HP,
               DEFAULT_SCAVTRAP_ENERGY, DEFAULT_SCAVTRAP_ATTACK) {
  print_msg("ScavTrap default constructor called");
}

ScavTrap::ScavTrap(std::string name)
    : ClapTrap(name, DEFAULT_SCAVTRAP_HP, DEFAULT_SCAVTRAP_ENERGY,
               DEFAULT_SCAVTRAP_ATTACK) {
  print_msg("ScavTrap parameterized constructor called");
}

// ClapTrap::ClapTrap(const ClapTrap &other)
ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
  print_msg("ScavTrap copy-constructor called");
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
  if (this != &other)
    ClapTrap::operator=(other);
  return (*this);
}

ScavTrap::~ScavTrap(void) { print_msg("ScavTrap destructor called."); }

void ScavTrap::attack(const std::string &target) {
  std::cout << "[LOG] ";
  if (HitPoints_ == 0) {
    std::cout << Name_ << " is HP of 0" << std::endl;
    return;
  }
  if (EnergyPoints_ > 0) {
    EnergyPoints_ = EnergyPoints_ - static_cast<unsigned int>(1);
    std::cout << Name_ << " ScavTrap::attacks " << target << std::endl;
  } else
    print_msg("Energy is not enough.");
}

void ScavTrap::takeDamage(unsigned int amount) { ClapTrap::takeDamage(amount); }

void ScavTrap::beRepaired(unsigned int amount) { ClapTrap::beRepaired(amount); }

void ScavTrap::guradGate(void) {
  std::cout << "[LOG] ";
  if (HitPoints_ > 0)
    std::cout << Name_ << " is now in Gate keeper mode" << std::endl;
  else
    std::cout << Name_ << " is HP of 0" << std::endl;
}

#ifdef DEBUG
void ScavTrap::print_status(void) { ClapTrap::print_status(); }
#endif
