#include <stdio.h>

unsigned
length(char *word)
{
  int i;

  i = 0;
  while (word[i] != '\0')
    ++i;

  return i;
}

int
main(int argc, char **argv)
{
  for (int i = 0; i < argc; ++i)
    printf("-> %s = %d\n", argv[i], length(argv[i]));

  return 0;
}
