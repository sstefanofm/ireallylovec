#include <stdio.h>
#include <string.h>

/* ./a.out <int1 int2 ...>
 * convert ints to binary output
 */

void
print_bin(int n)
{
  if (n)
    print_bin(n >> 1);
  printf("%d", n & 1);
}

int
power(int base, int p)
{
  int i;

  for (i = 1; p > 0; --p)
    i *= base;

  return i;
}

int
parse_int(char *w)
{
  int len = strlen(w),
      n = 0;

  for (int i = 0; i < len; ++i)
    n += (w[i] - 48) * power(10, (len - i - 1));

  return n;
}

int
args_are_ints(int argc, char **argv)
{
  for (int i = 1; i < argc; ++i)
    for (int j = 0; j < strlen(argv[i]); ++j)
      switch (argv[i][j]) {
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        case '0':
          break;
        default:
          return 0;
      }
  return 1;
}

int
main(int argc, char **argv)
{
  if (!args_are_ints(argc, argv)) {
    printf("You can only pass integer numbers as parameters: 1, 2, 3, 44, 566, ...\n");
    return 1;
  }

  int init_argc = argc;

  for (int i = 1; i < argc; ++i) {
    print_bin(parse_int(argv[i]));
    putchar('\n');
  }

  return 0;
}
