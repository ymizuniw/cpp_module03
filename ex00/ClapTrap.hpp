#ifndef CLAP_TRAP_H
#define CLAP_TRAP_H

#include <string>

#ifndef DEBUG
#define DEFAULT_CLAPTRAP_HP 10
#define DEFAULT_CLAPTRAP_ENERGY 10
#define DEFAULT_CLAPTRAP_ATTACK 0
#define DEFAULT_CLAPTRAP_REPAIRE 10
#else
#define DEFAULT_CLAPTRAP_HP 15
#define DEFAULT_CLAPTRAP_ENERGY 10
#define DEFAULT_CLAPTRAP_ATTACK 10
#define DEFAULT_CLAPTRAP_REPAIRE 10
#endif

class ClapTrap {
private:
  std::string Name_;
  unsigned int HitPoints_;
  unsigned int EnergyPoints_;
  unsigned int AttackDamage_;

public:
  ClapTrap(std::string name);
  ClapTrap(const ClapTrap &other);
  ~ClapTrap(void);
  ClapTrap &operator=(const ClapTrap &other);
  void attack(const std::string &target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
  void print_status(void); // debug
};

// print_msg
void print_msg(std::string msg);

// logs
void attack_log(const std::string &subject, const std::string &object);
void takeDamage_log(const std::string name, unsigned int amount);
void beRepaired_log(const std::string name, unsigned int amount);

#endif
