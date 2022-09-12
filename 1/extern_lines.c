#include <stdio.h>

#define MAXCHAR 200

int maxlen;
char line[MAXCHAR];
char longest[MAXCHAR];

int rcline(void)
{
    int i, c;
    extern char line[];

    for (i = 0; i < MAXCHAR - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    if (c == '\n')
    {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';

    return i;
}

void copy(void)
{
    extern char line[];
    extern char longest[];

    for (int i = 0; (longest[i] = line[i]) != '\0'; ++i)
        ;
}

int main(void)
{
    int curlen;
    extern int maxlen;

    maxlen = 0;
    while ((curlen = rcline()) > 0)
        if (curlen > maxlen)
        {
            maxlen = curlen;
            copy();
        }

    if (maxlen > 0)
        printf("%s", longest);

    return 0;
}
