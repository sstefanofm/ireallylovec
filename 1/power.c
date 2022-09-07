#include <stdio.h>

int power(int base, int p)
{
  int i, times = 0;

  for (i = 1; times < p; ++times)
    i = i * base;

  return i;
}

int main(void)
{
  int base = 3;
  int p    = 3;

  printf("%d ^ %d = %d\n", base, p, power(base, p));

  return 0;
}
