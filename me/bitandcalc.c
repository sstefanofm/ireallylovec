#include <stdio.h>

// ./a.out word
/* pass props and perform bitwise operator (&) calculation on them
 * ASCII table values
 *
 * (119) w = 1 1 1 0 1 1 1
 * (111) o = 1 1 0 1 1 1 1
 * (114) r = 1 1 1 0 0 1 0
 * (100) d = 1 1 0 0 1 0 0
 *  result = 1 1 0 0 0 0 0 = 96
 * */

void
print_line(int width) {
  printf("\t\b\b( & )\t\b-");
  do {
    printf("--");
  } while (width >>= 1);
  printf("--");
  putchar('\n');
}

void
print_bin(int n) {
  if (n)
    print_bin(n >> 1);
  printf("%d ", n & 1);
}

int
bitandsum(char *word) {
  int sum = word[0];

  for (int i = 1; word[i] != '\0'; ++i)
    sum &= word[i];

  return sum;
}

void
print_info(char c) {
  printf("(%d)\t%c\t", c, c);
}

void
print_table(char *word) {
  for (int i = 0; word[i] != '\0'; ++i) {
    print_info(word[i]);
    print_bin(word[i]);
    putchar('\n');
  }
  print_line(word[0]);
  print_info(bitandsum(word));
  print_bin(bitandsum(word));
  printf("\n\n\n");
}

int
main(int argc, char **argv) {
  int init_argc = argc;

  while (--argc)
    print_table(argv[init_argc - argc]);

  return 0;
}

