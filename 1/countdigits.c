#include <stdio.h>

int main(void)
{
  int c, nwhite, nother;
  int ndigit[10] = { 0 };

  nwhite = nother = 0;

  while ((c = getchar()) != EOF)
    if (c >= '0' && c <= '9')
      ++ndigit[c - '0'];
    else if (c == ' ' || c == '\n' || c == '\t')
      ++nwhite;
    else
      ++nother;

  printf("digits\t\t");
  for (int i = 0; i < 10; ++i)
    printf("%d\t", i);
  printf("\n");
  printf("occurences\t");
  for (int i = 0; i < 10; ++i)
    printf("%d\t", ndigit[i]);
  printf("\n");

  printf("whites: %d\n", nwhite);
  printf("others: %d\n", nother);

  return 0;
}
