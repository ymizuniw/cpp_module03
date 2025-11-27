#ifndef FLAGTRAP_HPP
#define FLAGTRAP_HPP

#include "ClapTrap.hpp"

#define FLAGTRAP_DEFAULT_HP 100
#define FLAGTRAP_DEFAULT_ENERGY 100
#define FLAGTRAP_DEFAULT_ATTACK 30
#define FLAGTRAP_DEFAULT_RECOVER 10

class FlagTrap : public ClapTrap
{
    public:
        FlagTrap(std::string name);
        FlagTrap(const FlagTrap &other);
        FlagTrap &operator=(const FlagTrap &other);
        ~FlagTrap(void);
        void highFiceGuys(void);
};

#endif
