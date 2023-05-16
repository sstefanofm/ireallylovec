#include <stdio.h>

/*
 * /dev/null ;)
 */

int
is_empty(char *word)
{
  return word[0] == '\0';
}

int
main(int argc, char **argv)
{
  for (int i = 0; i < argc; ++i)
    printf(
      "'%s'[%d] -> %s\n", 
      argv[i], 
      i, 
      is_empty(argv[i]) 
        ? "empty" : "not empty"
    );

  return 0;
}
