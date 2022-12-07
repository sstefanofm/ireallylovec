#include <stdio.h>

int
strlen(char s[])
{
    int i;
    for (i = 0; s[i] != '\0'; ++i)
        ;
    return i;
}

int
main
(void)
{
    char *words[] = { "custome", "pumpkin", "hey", "hello" };

    printf("%s\t%d\n", words[0], strlen(words[0]));
    printf("%s\t%d\n", words[1], strlen(words[1]));
    printf("%s\t%d\n", words[2], strlen(words[2]));
    printf("%s\t%d\n", words[3], strlen(words[3]));

    return 0;
}
