#include <FragTrap.hpp>

int main(void) {
  FragTrap Ft0; // default constructor call
  FragTrap Ft1("Frag1");
  FragTrap Ft2("Frag2");
  FragTrap Ft3("Frag3");
  FragTrap Ft4(Ft3);     // equal to Ft3
  FragTrap Ft5("Frag5"); // equal to Ft5
  Ft5 = Ft4;
#ifdef DEBUG
  Ft1.print_status();
  Ft2.print_status();
  Ft3.print_status();
  Ft4.print_status();
  Ft5.print_status();
#endif
  Ft1.attack("Frag2");
  Ft2.takeDamage(DEFAULT_FRAGTRAP_ATTACK);
  Ft3.beRepaired(DEFAULT_FRAGTRAP_REPAIRE);
  Ft4.highFiveGuys();
#ifdef DEBUG
  Ft1.print_status();
  Ft2.print_status();
  Ft3.print_status();
  Ft4.print_status();
  Ft5.print_status();
#endif
  Ft3.takeDamage(200);
  Ft3.attack("Frag2");
  Ft3.beRepaired(100);
  Ft3.highFiveGuys();
#ifdef DEBUG
  Ft3.print_status();
#endif
  return (0);
}
