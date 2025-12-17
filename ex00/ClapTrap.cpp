#include <ClapTrap.hpp>
#include <iostream>

// when debugging, change the value of HP and test of repair.
ClapTrap::ClapTrap(std::string name)
    : Name_(name), HitPoints_(DEFAULT_CLAPTRAP_HP),
      EnergyPoints_(DEFAULT_CLAPTRAP_ENERGY),
      AttackDamage_(DEFAULT_CLAPTRAP_ATTACK) {
  print_msg("ClapTrap default constructor called.");
}

ClapTrap::ClapTrap(const ClapTrap &other)
    : Name_(other.Name_), HitPoints_(other.HitPoints_),
      EnergyPoints_(other.EnergyPoints_), AttackDamage_(other.AttackDamage_) {
  print_msg("ClapTrap copy-constructor called.");
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
  Name_ = other.Name_;
  HitPoints_ = other.HitPoints_;
  EnergyPoints_ = other.EnergyPoints_;
  AttackDamage_ = other.AttackDamage_;
  return (*this);
}

ClapTrap::~ClapTrap(void) { print_msg("ClapTrap default destructor called."); }

void ClapTrap::attack(const std::string &target) {
  std::cout << "[LOG] ";
  if (HitPoints_ == 0) {
    std::cout << Name_ << " is HP of 0" << std::endl;
    return;
  }
  if (EnergyPoints_ > 0) {
    EnergyPoints_ = EnergyPoints_ - static_cast<unsigned int>(1);
    attack_log(Name_, target);
  } else
    print_msg("Energy is not enough.");
}

void ClapTrap::takeDamage(unsigned int amount) {
  std::cout << "[LOG] ";
  if (HitPoints_ < amount)
    HitPoints_ = 0;
  else
    HitPoints_ -= amount;
  takeDamage_log(Name_, amount);
}

void ClapTrap::beRepaired(unsigned int amount) {
  std::cout << "[LOG] ";
  if (HitPoints_ == 0) {
    std::cout << Name_ << " is HP of 0" << std::endl;
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
