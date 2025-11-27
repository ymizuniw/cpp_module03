#include "DiamondTrap.hpp"
//+ _clap_name sufix.
DiamondTrap::DiamondTrap(std::string name) : name_(name)
{
    ClapTrap::Name_ = name_;
}
        DiamondTrap(const DiamondTrap &other);
        DiamondTrap &operator=(const DiamondTrap &other);
        ~DiamondTrap(void); 