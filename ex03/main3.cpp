#include "ScavTrap.hpp"
#include <DiamondTrap.hpp>

int main(void) {
  DiamondTrap Dt0; // default constructor.
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
  Dt2.beRepaired(DEFAULT_CLAPTRAP_REPAIRE);
  Dt4.guradGate();
#ifdef DEBUG
  Dt1.print_status();
  Dt2.print_status();
  Dt3.print_status();
  Dt4.print_status();
  Dt5.print_status();
#endif
  Dt2.attack("Dia1");
  Dt1.takeDamage(DEFAULT_SCAVTRAP_ATTACK);
  Dt2.attack("Dia1");
  Dt1.takeDamage(DEFAULT_SCAVTRAP_ATTACK);
  Dt2.attack("Dia1");
  Dt1.takeDamage(DEFAULT_SCAVTRAP_ATTACK);
  Dt2.attack("Dia1");
  Dt1.takeDamage(DEFAULT_SCAVTRAP_ATTACK);
  Dt2.attack("Dia1");
  Dt1.takeDamage(DEFAULT_SCAVTRAP_ATTACK);
  Dt2.attack("Dia1");
  Dt1.takeDamage(DEFAULT_SCAVTRAP_ATTACK);
  Dt1.attack("Dia2");                       // cannot attack
  Dt1.beRepaired(DEFAULT_CLAPTRAP_REPAIRE); // cannnot repaired.
  Dt2.whoAmI();
  Dt2.guradGate();
  Dt2.highFiveGuys();
  Dt1.whoAmI();
  Dt1.takeDamage(100);
  // do nothing.
  Dt1.whoAmI();
  Dt1.attack("Dia2");
  Dt1.beRepaired(100);
  Dt1.guradGate();
  Dt1.highFiveGuys();
#ifdef DEBUG
  Dt1.print_status();
  Dt2.print_status();
#endif
  return (0);
}
