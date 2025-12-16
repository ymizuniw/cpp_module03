#ifndef CLAP_TRAP_H
#define CLAP_TRAP_H

#include <iomanip>
#include <iostream>

#define DEFAULT_CLAPTRAP_HP 10
#define DEFAULT_CLAPTRAP_ENERGY 10
#define DEFAULT_CLAPTRAP_ATTACK 0
#define DEFAULT_CLAPTRAP_REPAIRE 10

// for polymophism.
class ClapTrap {
protected:
  std::string Name_;
  unsigned int HitPoints_;
  unsigned int EnergyPoints_;
  unsigned int AttackDamage_;

public:
  ClapTrap(std::string name);
  ClapTrap(const ClapTrap &other);
  ClapTrap(std::string name, unsigned int HitPoints_,
           unsigned int EnergyPoints_, unsigned int AttackDamage_);
  virtual ~ClapTrap(void);
  ClapTrap &operator=(const ClapTrap &other);
  void attack(const std::string &target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
  std::string &getName(void);
};

void print_msg(std::string msg);

#endif
