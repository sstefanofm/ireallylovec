#include <stdio.h>

#define TABSIZE 8

int main(void)
{
    int c, pos;

    pos = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\t')
        {
            while (pos < TABSIZE)
            {
                putchar('_');
                ++pos;
            }
            pos = 0;
            continue;
        }
        else
            putchar(c);
        if (pos >= TABSIZE - 1 || c == '\n')
            pos = 0;
        else
            ++pos;
    }

    return 0;
}
