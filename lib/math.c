#include "math.h"

int
power(int base, int p)
{
  int i;

  for (i = 1; p > 0; --p)
    i *= base;

  return i;
}

