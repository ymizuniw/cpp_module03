#include <ScavTrap.hpp>

int main(void) {
  ScavTrap St1("Scav1");
  ScavTrap St2("Scav2");
  ScavTrap St3("Scav3");
  ScavTrap St4(St3);     // equal to St3
  ScavTrap St5("Scav5"); // equal to St5
  St5 = St4;
#ifdef DEBUG
  St1.print_status();
  St2.print_status();
  St3.print_status();
  St4.print_status();
  St5.print_status();
#endif
  St1.attack("Scav2");
  St2.takeDamage(DEFAULT_SCAVTRAP_ATTACK);
  St3.beRepaired(DEFAULT_SCAVTRAP_REPAIRE);
  St4.guradGate();
#ifdef DEBUG
  St1.print_status();
  St2.print_status();
  St3.print_status();
  St4.print_status();
  St5.print_status();
#endif
  return (0);
}
