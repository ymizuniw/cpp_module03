#include <ScavTrap.hpp>
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
