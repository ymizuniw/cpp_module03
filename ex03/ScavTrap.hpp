#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include "ClapTrap.hpp"
#define SCAVTRAP_DEFAULT_HP 100
#define SCAVTRAP_DEFAULT_ENERGY 50
#define SCAVTRAP_DEFAULT_ATTACK 20
#define SCAVTRAP_DEFAULT_REPAIRE 10
// COST?

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

// #include <iostream>
// using namespace std;

// class A {
//    int data;
// public:
//    void f(int arg) { data = arg; }
//    int g() { return data; }
// };

// class B : public A { };

// int main() {
//    B obj;
//    obj.f(20);
//    cout << obj.g() << endl;
// }

// private:
//     std::string Name_;
//     unsigned int HitPoints_;
//     unsigned int EnergyPoints_;
//     unsigned int AttackDamage_;
// public:
//     ClapTrap(std::string name);
//     ClapTrap(const ClapTrap &other);
//     ~ClapTrap(void);
//     ClapTrap &operator=(const ClapTrap &other);
//     void attack(const std::string &target);
//     void takeDamage(unsigned int amount);
//     void beRepaired(unsigned int amount);

// note that proper construction/destructino chaining must be shown in your
// tests. when a ScavTrap is created, the program starts by constructing a
// ClapTrap. Destruction occrurs in reverse order.
class ScavTrap : public virtual ClapTrap {
public:
  ScavTrap(std::string name);
  ScavTrap(const ScavTrap &other);
  ScavTrap &operator=(const ScavTrap &other);
  ~ScavTrap(void);
  void guradGate(void);

protected:
  ClapTrap::attack;
};

// samename
//  class Gamecharacter{
//      public:
//          virtual void attack(){
//              //
//          }
//  };

// class Warrior : public Gamecharacter{
//     public:
//         void attack() override{
//             //
//         }
//     void recover(){
//         //
//     }
// }

#endif
