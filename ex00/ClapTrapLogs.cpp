#include <ClapTrap.hpp>
#include <iostream>

void print_msg(std::string msg) { std::cout << msg << std::endl; }

void attack_log(const std::string &subject, const std::string &object) {
  std::cout << subject << " attacks " << object << std::endl;
}

void takeDamage_log(const std::string name, unsigned int amount) {
  std::cout << name << " damaged by " << amount << std::endl;
}

void beRepaired_log(const std::string name, unsigned int amount) {
  std::cout << name << " be repaired by " << amount << std::endl;
}

#ifdef DEBUG
void ClapTrap::print_status(void) {
  std::cout << "============STATUS============" << std::endl;
  std::cout << "Name: " << Name_ << std::endl;
  std::cout << "HitPoints: " << HitPoints_ << std::endl;
  std::cout << "EnergyPoints: " << EnergyPoints_ << std::endl;
  std::cout << "AttackDamage: " << AttackDamage_ << std::endl;
  std::cout << "\n==============================\n" << std::endl;
}
#endif
