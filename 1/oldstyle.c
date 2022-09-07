#include <stdio.h>

/* function declarations in the original definition of C
 * before the ANSI C standard */

int foo(one, two)
int one, two;
{
  return 20;
}

int main(argc, argv)
int argc;
char *argv[];
{
  printf("%d\n", foo(1, 2));

  return 0;
}
