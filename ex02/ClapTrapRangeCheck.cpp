#include <ClapTrap.hpp>
#include <limits>

bool uint_sum_overflow(unsigned int n1, unsigned int n2) {
  unsigned long long ui = 0;
  ui = n1 + n2;
  if (ui >
      static_cast<unsigned long long>(std::numeric_limits<unsigned int>::max()))
    return true;
  return (false);
}

bool uint_mult_overflow(unsigned int n1, unsigned int n2) {
  unsigned long long ui = 0;
  ui = n1 * n2;
  if (ui >
      static_cast<unsigned long long>(std::numeric_limits<unsigned int>::max()))
    return true;
  return (false);
}
