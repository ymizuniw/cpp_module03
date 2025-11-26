#include <ClapTrap.hpp>

void print_msg(std::string msg)
{
    std::cout << msg << std::endl;
}

// class ClapTrap
// {
//     private:
//         std::string Name_;
//         uint32_t HitPoints_;
//         uint32_t EnergyPoints_;
//         uint32_t AttackDamage_;
//     public:
        // ClapTrap(void);
        // ClapTrap(const ClapTrap &other);
        // ~ClapTrap(void);
        // ClapTrap &operator=(const ClapTrap &other);
//         void attack(const std::string &target);
//         void takeDamage(uint32_t amount);
//         void beRepaired(uint32_t amount);
// };

ClapTrap::ClapTrap(std::string name) : Name_(name), HitPoints_(DEFAULT_HP), EnergyPoints_(DEFAULT_ENERGY), AttackDamage_(DEFAULT_ATTACK)
{
    print_msg("ClapTrap default constructor called.");
}

ClapTrap::ClapTrap(const ClapTrap &other) : Name_(other.Name_),  HitPoints_(other.HitPoints_), EnergyPoints_(other.EnergyPoints_), AttackDamage_(other.AttackDamage_)
{
    print_msg("ClapTrap copy-constructor called.");
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    Name_=other.Name_;
    HitPoints_=other.HitPoints_;
    EnergyPoints_=other.EnergyPoints_;
    AttackDamage_=other.AttackDamage_;
    return (*this);
}

ClapTrap::~ClapTrap(void)
{
    print_msg("ClapTrap default destructor called.");
}

void attack_log(const std::string &subject, const std::string &object)
{
    std::cout<< subject << "attacks" << object  << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if (HitPoints_==0)
    {
        std::cout << Name_ << "is HP of 0";
        return ;
    }
    if (EnergyPoints_>0)
    {
        EnergyPoints_=EnergyPoints_-static_cast<uint32_t>(1);
        attack_log(Name_, target);
    }
    else
        print_msg("Energy is not enough.");
}

void takeDamage_log(const std::string name, uint32_t amount)
{
    std::cout << name << "damaged by" << amount << std::endl;
}

bool uint_sum_overflow(uint32_t n1, uint32_t n2)
{
    uint64_t ui=0;
    ui = n1 + n2;
    if (ui > UINT_MAX)
        return true;
    return (false);
}

bool uint_mult_overflow(uint32_t n1, uint32_t n2)
{
    uint64_t ui=0;
    ui = n1 * n2;
    if (ui > UINT_MAX)
        return true;
    return (false);
}

void ClapTrap::takeDamage(uint32_t amount)
{
    if (HitPoints_<amount)
        HitPoints_=0;
    else
        HitPoints_-=amount;
    takeDamage_log(Name_, amount);
}

void    beRepaired_log(const std::string name, uint32_t amount)
{
    std::cout << name << "be repaired by" << amount << std::endl;
}

void ClapTrap::beRepaired(uint32_t amount)
{
    if (HitPoints_==0)
    {
        std::cout << Name_ << "is HP of 0";
        return ;
    }
    if (EnergyPoints_>0)
        EnergyPoints_=EnergyPoints_-static_cast<uint32_t>(1);
    else
    {
        print_msg("Energy point is not enough");
        return ;
    }
    if (static_cast<uint32_t>(DEFAULT_HP) - amount<HitPoints_)
        HitPoints_= static_cast<uint32_t>(DEFAULT_HP);
    else
        HitPoints_+=amount;
    beRepaired_log(Name_, amount);
}
