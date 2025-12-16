#include <DiamondTrap.hpp>

int main(void) {
  DiamondTrap Dt1("Dia1");
  DiamondTrap Dt2("Dia2");
  DiamondTrap Dt3("Dia3");
  DiamondTrap Dt4(Dt3);    // equal to Dt3
  DiamondTrap Dt5("Dia5"); // equal to Dt5
  Dt5 = Dt4;
#ifdef DEBUG
  Dt1.print_status();
  Dt2.print_status();
  Dt3.print_status();
  Dt4.print_status();
  Dt5.print_status();
#endif
  Dt1.attack("Dia2");
  Dt2.takeDamage(DEFAULT_SCAVTRAP_ATTACK);
  Dt3.beRepaired(DEFAULT_SCAVTRAP_REPAIRE);
  Dt4.guradGate();
#ifdef DEBUG
  Dt1.print_status();
  Dt2.print_status();
  Dt3.print_status();
  Dt4.print_status();
  Dt5.print_status();
#endif
  return (0);
  return (0);
}
