#ifndef CLAP_TRAP_H
#define CLAP_TRAP_H

#include <iostream>
#include <iomanip>

#define DEFAULT_CLAPTRAP_HP 10
#define DEFAULT_CLAPTRAP_ENERGY 10
#define DEFAULT_CLAPTRAP_ATTACK 0
#define DEFAULT_CLAPTRAP_REPAIRE 10

class ClapTrap
{
    private:
        std::string Name_;
        uint32_t HitPoints_;
        uint32_t EnergyPoints_;
        uint32_t AttackDamage_;
    public:
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &other);
        ~ClapTrap(void);
        ClapTrap &operator=(const ClapTrap &other);
        void attack(const std::string &target);
        void takeDamage(uint32_t amount);
        void beRepaired(uint32_t amount);
};

#endif
