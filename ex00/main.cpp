#include "ClapTrap.hpp"
#include <iostream>

int main(void) {
  ClapTrap Ct1("Crap1");
  ClapTrap Ct2("Crap2");

  // atack
  std::cout << "Ct1 attacks Ct2" << std::endl;
  Ct1.attack("Crap2");
  Ct1.print_status();
  // take damage
  std::cout << "Ct2 takeDamage" << std::endl;
  Ct2.takeDamage(DEFAULT_CLAPTRAP_ATTACK);
  Ct2.print_status();
  // repairs default constructor initialize list values shall be changed.
  std::cout << "Ct2 beRepaired" << std::endl;
  Ct2.beRepaired(DEFAULT_CLAPTRAP_REPAIRE);
  Ct2.print_status();

  //  Do nothing
  Ct2.beRepaired(DEFAULT_CLAPTRAP_REPAIRE);
  Ct2.attack("Crap1");
  Ct1.takeDamage(DEFAULT_CLAPTRAP_ATTACK);
  Ct1.print_status();
  Ct2.print_status();
  return (0);
}
