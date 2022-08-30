/* prints a characters occurences histogram */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
  int c;
  int nchar[25] = { 0 };

  while ((c = getchar()) != EOF)
    if ((c = toupper(c)) >= 'A' && c <= 'Z')
      ++nchar[c - 'A'];

  for (int i = 0; i < 25; ++i)
  {
    printf("%c: %d ", i + 65, nchar[i]);
    for (int j = 0; j < nchar[i]; ++j)
      putchar('#');
    putchar('\n');
  }

  return 0;
}
