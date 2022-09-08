#include <stdio.h>

#define MAXCHAR 200
#define MAXLINE 50
#define LIMITLENGTH 20

int rcline(char line[], int maxchar)
{
    int c, i;

    for (i = 0; i < maxchar - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    if (c == '\n')
    {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';

    return i;
}

void copy(char to[], char from[])
{
    for (int i = 0; (to[i] = from[i]) != '\0'; ++i)
        ;
}

int main(void)
{
    int curlen = 0;
    int j = 0;
    char line[MAXCHAR];
    char longest[MAXLINE][MAXCHAR];

    while ((curlen = rcline(line, MAXCHAR)) > 0)
        if (curlen > LIMITLENGTH)
        {
            copy(longest[j], line);
            ++j;
        }

    for (int i = 0; i < j; ++i)
        printf("%s", longest[i]);

    return 0;
}

