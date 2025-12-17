#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include <ClapTrap.hpp>

#define DEFAULT_SCAVTRAP_HP 100
#define DEFAULT_SCAVTRAP_ENERGY 50
#define DEFAULT_SCAVTRAP_ATTACK 20
#define DEFAULT_SCAVTRAP_REPAIRE 10

// 同次元クラス間では属性に関係なくメンバーにアクセスできる。属性はアクセサともいい、外部からアクセスする時の属性を指す。
// 継承時、子クラスは親クラスのprivate以外のメンバーにアクセスできる。親クラスは子クラスのpublicメンバー以外にアクセスできない。
// 包含関係があri、逆は成り立たない。

class ScavTrap : private virtual ClapTrap {
private:
public:
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
