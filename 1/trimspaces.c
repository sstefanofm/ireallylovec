/**
 * program to copy input to output
 * also replacing one or more spaces by a single one
 */

#include <stdio.h>

int main()
{
  int c;

  while ((c = getchar()) != EOF)
  {
    if (c == ' ')
    {
      while ((c = getchar()) == ' ')
        ;
      putchar(' ');
    }
    putchar(c);
  }

  return 0;
}
