#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FlagTrap.hpp"

class DiamondTrap : public virtual ScavTrap, public virtual FlagTrap
{
    private:
        std::string name_;
    public:
        DiamondTrap(std::string name);//+ _clap_name sufix.
        DiamondTrap(const DiamondTrap &other);
        DiamondTrap &operator=(const DiamondTrap &other);
        ~DiamondTrap(void);

};

#endif