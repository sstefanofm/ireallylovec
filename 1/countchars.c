#include <stdio.h>

int main(void)
{
  long nc;

  for (nc = 0; getchar() != EOF; ++nc)
    ;
  printf("%ld\n", nc);

  return 0;
}
