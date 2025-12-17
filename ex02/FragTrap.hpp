#ifndef FLAGTRAP_HPP
#define FLAGTRAP_HPP

#include "ClapTrap.hpp"

#define DEFAULT_FRAGTRAP_HP 100
#define DEFAULT_FRAGTRAP_ENERGY 100
#define DEFAULT_FRAGTRAP_ATTACK 30
#define DEFAULT_FRAGTRAP_REPAIRE 10

class FragTrap : public virtual ClapTrap {
public:
  FragTrap(void);
  FragTrap(std::string name);
  FragTrap(const FragTrap &other);
  FragTrap &operator=(const FragTrap &other);
  ~FragTrap(void);
  void attack(const std::string &target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
  void highFiveGuys(void);
#ifdef DEBUG
  void print_status(void); // debug
#endif
};

#endif
