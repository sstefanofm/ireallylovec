#include <stdio.h>

#define MAXLINE 200

/* the purpose of supplying the size of an array in a declaration, is to
 *  set aside storage.
 * the length of the array will be set in main */
int readline(char line[], int maxline)
{
    int c, i;

    for (i = 0; i < maxline - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    if (c == '\n')
    {
        line[i] = c;
        ++i;
    }
    line[i] = '\0'; // null character

    return i;
}

/* beautiful */
void copy(char to[], char from[])
{
    int i = 0;

    while ((to[i] = from[i]) != '\0')
        ++i;
}

int main(void)
{
    int curlen;
    int maxlen = 0;
    char line[MAXLINE];
    char longest[MAXLINE];

    while ((curlen = readline(line, MAXLINE)) > 0)
        if (curlen > maxlen) 
        {
            maxlen = curlen;
            copy(longest, line);
        }

    if (maxlen > 0)
        printf("%s", longest);

    return 0;
}
