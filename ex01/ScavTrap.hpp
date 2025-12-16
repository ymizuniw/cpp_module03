#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include <ClapTrap.hpp>

#define SCAVTRAP_DEFAULT_HP 100
#define SCAVTRAP_DEFAULT_ENERGY 50
#define SCAVTRAP_DEFAULT_ATTACK 20
#define SCAVTRAP_DEFAULT_REPAIRE 10

// ポリモアフィック関数 は、複数の型のオブジェクトに適用できる関数です。
// C++ では、ポリモアフィック関数は、2 つの方法でインプリメントできます。
// 多重定義された関数は、コンパイル時に静的にバインドされます。
// C++ が、仮想関数を提供します。 仮想関数 は、派生を介して関連付けられている、
// いくつかの様々なユーザー定義の型について呼び出すことができる関数です。
// 仮想関数は、実行時に動的にバインドされます。
// これについては、 仮想関数 (C++ のみ)でさらに詳しく説明しています。

// 同次元クラス間では属性に関係なくメンバーにアクセスできる。属性はアクセサともいい、外部からアクセスする時の属性を指す。
// 継承時、子クラスは親クラスのprivate以外のメンバーにアクセスできる。親クラスは子クラスのpublicメンバー以外にアクセスできない。
// 包含関係があるので、逆は成り立たない。

class ScavTrap : private ClapTrap {
private:
public:
  ScavTrap(std::string name);
  ScavTrap(const ScavTrap &other);
  ScavTrap &operator=(const ScavTrap &other);
  ~ScavTrap(void);
  void guradGate(void);
#ifdef DEBUG
  void print_status(void);
#endif
};

#endif
