/* print input one word per line */

#include <stdio.h>

#define IN  1
#define OUT 0

int main(void)
{
  int c, state;

  while ((c = getchar()) != EOF)
  {
    if (c == ' ' || c == '\t')
    {
      state = OUT;
      continue;
    }
    else if (state == OUT)
    {
      state = IN;
      putchar('\n');
    }
    putchar(c);
  }

  return 0;
}
