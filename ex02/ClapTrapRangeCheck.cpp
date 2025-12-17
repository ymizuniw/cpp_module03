#include <ClapTrap.hpp>
#include <limits>
#include <stdint.h>

bool uint_sum_overflow(unsigned int n1, unsigned int n2) {
  uint64_t ui;
  ui = 0;
  ui = n1 + n2;
  if (ui > static_cast<uint64_t>(std::numeric_limits<unsigned int>::max()))
    return true;
  return (false);
}

bool uint_mult_overflow(unsigned int n1, unsigned int n2) {
  uint64_t ui;
  ui = 0;
  ui = n1 * n2;
  if (ui > static_cast<uint64_t>(std::numeric_limits<unsigned int>::max()))
    return true;
  return (false);
}
