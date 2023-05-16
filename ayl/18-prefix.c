#include <stdio.h>

int
is_prefix(char *pre, char *str)
{
  for (int i = 0; pre[i] != '\0'; ++i)
    if (pre[i] != str[i])
      return 0;
  return 1;
}

int
main(void)
{
  int nt = 5;
  char *t[] = {
    "test", "testing",
    "word", "world",
    "hell", "HELLO",
    "stri", "string",
    "done", "",
  };

  for (int i = 0; i < nt * 2; i += 2) {
    printf("'%s' is ", t[i]);
    if (!is_prefix(t[i], t[i + 1]))
      printf("NOT ");
    printf("a prefix of '%s'\n", t[i + 1]);
  }

  return 0;
}
