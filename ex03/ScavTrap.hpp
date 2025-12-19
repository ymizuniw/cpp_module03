#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include <ClapTrap.hpp>

#define DEFAULT_SCAVTRAP_HP 100
#define DEFAULT_SCAVTRAP_ENERGY 50
#define DEFAULT_SCAVTRAP_ATTACK 20
#define DEFAULT_SCAVTRAP_REPAIRE 10

class ScavTrap : public virtual ClapTrap {
public:
  ScavTrap(void);
  ScavTrap(std::string name);
  ScavTrap(const ScavTrap &other);
  ScavTrap &operator=(const ScavTrap &other);
  ~ScavTrap(void);
  void attack(const std::string &target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
  void guradGate(void);
#ifdef DEBUG
  void print_status(void);
#endif
};

#endif
