#include "ClapTrap.hpp"

int main(void) {
  ClapTrap Ct0; // default constructor.
  ClapTrap Ct1("Crap1");
  ClapTrap Ct2("Crap2");
  ClapTrap Ct3(Ct1);
  ClapTrap Ct4 = Ct2;
#ifdef DEBUG
  Ct3.print_status();
#endif
#ifdef DEBUG
  Ct4.print_status();
#endif
  // atack
  Ct1.attack("Crap2");
#ifdef DEBUG
#ifdef DEBUG
  Ct1.print_status();
#endif
#endif
  // take damage
  Ct2.takeDamage(DEFAULT_CLAPTRAP_ATTACK);
#ifdef DEBUG
  Ct2.print_status();
#endif
  // repairs default constructor initialize list values shall be changed.
  Ct2.beRepaired(DEFAULT_CLAPTRAP_REPAIRE);
#ifdef DEBUG
  Ct2.print_status();
#endif
  //  Do nothing
  Ct2.beRepaired(DEFAULT_CLAPTRAP_REPAIRE);
  Ct2.attack("Crap1");
  Ct1.takeDamage(DEFAULT_CLAPTRAP_ATTACK);
#ifdef DEBUG
  Ct1.print_status();
#endif
#ifdef DEBUG
  Ct2.print_status();
#endif
  Ct1.takeDamage(100);
  Ct1.attack("Ct2");
  Ct1.beRepaired(100);
#ifdef DEBUG
  Ct1.print_status();
  Ct2.print_status();
#endif
  return (0);
}
