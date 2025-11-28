#ifndef FLAGTRAP_HPP
#define FLAGTRAP_HPP

#include "ClapTrap.hpp"

#define FLAGTRAP_DEFAULT_HP 100
#define FLAGTRAP_DEFAULT_ENERGY 100
#define FLAGTRAP_DEFAULT_ATTACK 30
#define FLAGTRAP_DEFAULT_RECOVER 10

class FragTrap : public ClapTrap
{
    public:
        FragTrap(std::string name);
        FragTrap(const FragTrap &other);
        FragTrap &operator=(const FragTrap &other);
        ~FragTrap(void);
        void highFiceGuys(void);
};

#endif
