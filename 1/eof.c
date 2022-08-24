#include <stdio.h>

int main(void)
{
  /* we can't use char since 'c' must be big enough to hold EOF in
   * addition to any possible char.
   */
  int c;

  /* getchar returns a distinctive value when there is no more input
   * : EOF end of file.
   */
  while ((c = getchar()) != EOF)
    putchar(c);

  /* EOF is an integer defined in stdio.h
   * it holds values < 0
   * by using the symbolic constant, we are assured that nothing in
   *    the program depends on the specific numeric value
   */

  printf("\nint EOF = %d\n", EOF);
  printf("%s\n", getchar() != EOF ? "different" : "equal");

  return 0;
}
