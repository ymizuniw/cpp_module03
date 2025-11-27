#include "ScavTrap.hpp"

        ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
        {
            HitPoints_ = SCAVTRAP_DEFAULT_HP;
            EnergyPoints_ = SCAVTRAP_DEFAULT_ENERGY;
            AttackDamage_ = SCAVTRAP_DEFAULT_ATTACK;
            print_msg("ScavTrap constructor called");
        }

        ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
        {
            if (this!=&other)
                *this = other;
        }

        ScavTrap &ScavTrap::operator=(const ScavTrap &other)
        {
            if (this!=&other)
            ClapTrap::operator=(other);
            return (*this);
        }
         
         ScavTrap::~ScavTrap(void)
         {
            print_msg("ScavTrap default destructor called.");
         }

        void ScavTrap::guradGate(void)
        {
            std::cout << Name_ << "is Gate keeper mode" << std::endl;
        }
