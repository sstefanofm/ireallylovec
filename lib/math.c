#include "math.h"

int
power(int base, int p)
{
  int i;

  for (i = 1; p > 0; --p)
    i *= base;

  return i;
}

int
rpower(int base, int p)
{
  if (p)
    return base * rpower(base, p - 1);
  return 1;
}

