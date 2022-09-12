/* this program replaces tabs and characters from stdin
 *  with the minumum ammount of tabs and spaces */

#include <stdio.h>

#define MAXCHAR 200
#define TABSIZE 8

/* reads a line and returns its length */
int rcline(char line[], int maxlen)
{
    int c, i;

    for (i = 0; i < maxlen - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    if (c == '\n')
    {
        line[i] = '\n';
        ++i;
    }
    line[i] = '\0';

    return i;
}

/* prints the number of blank characters */
void printnb(char line[])
{
    int nt, ns;

    nt = ns = 0;
    for (int i = 0; line[i] != '\n' && line[i] != '\0'; ++i)
        if (line[i] == '\t')
            ++nt;
        else
            ++ns;
    printf("[\\t:%d,s:%d]\n", nt, ns);
}

/* creates the 'compressed' line, with the less amount of tabs and spaces */
void trline(char line[], char newline[], int tabsize)
{
    int j, pos;

    j = 0;
    for (int i = 0; line[i] != '\n' && line[i] != '\0'; ++i)
    {
        ++pos;
        if (line[i] == '\t' || pos >= tabsize)
        {
            newline[j] = '\t';
            ++j;
            pos = 0;
        }
    }
    for (int i = 0; i < pos; ++i)
    {
        newline[j] = ' ';
        ++j;
    }
    newline[j] = '\n';
    ++j;
    newline[j] = '\0';
}

int main(void)
{
    char line[MAXCHAR];
    char newline[MAXCHAR];

    while (rcline(line, MAXCHAR) > 0)
    {
        printnb(line);
        trline(line, newline, TABSIZE);
        printf("%s", newline);
        printnb(newline);
    }

    return 0;
}
