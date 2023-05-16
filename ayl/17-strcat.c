#include <stdio.h>

int
main(int argc, char **argv)
{
  int i, limit;

  limit = argc % 2 == 0 ? argc : argc - 1;
  for (int i = 0; i < limit; i += 2)
    printf(
      "%s · %s = %s%s\n", 
      argv[i], 
      argv[i + 1],
      argv[i],
      argv[i + 1]
    );

  return 0;
}
