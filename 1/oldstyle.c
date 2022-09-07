#include <stdio.h>

/* function declarations in the original definition of C -> K&R style
 * before the ANSI C standard */

foo(one, two)
  int one, two;
{
  return 20;
}

main(argc, argv)
  int argc;
  char **argv;
{
  printf("%d\n", foo(1, 2));

  return 0;
}
