#include <stdio.h>

#define LIMIT 45 /* column position where the line has to end to insert a new line */
#define MAXCHAR 200

int rcline(char line[], int max)
{
    int c, i;

    for (i = 0; i < max - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    if (c == '\n')
    {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';

    return i;
}

void fold(char line[], int len, int limit)
{
    int start, end, flag;

    flag = 0; /* when you find a space, mark that index as a flag, to then start analyzing from that position */
    end = -1;
    while (end != len - 1)
    {
        start = flag;
        end = limit + flag >= len ? len - 1 : limit + flag - 1;
        flag = -1;
        for (int i = end; i >= start && end != len - 1; --i)
            if ((line[i] == ' ' || line[i] == '\t') && i - start > (end - start) / 2) /* i am a genius... THE MAGICIAN */
            {
                for (int j = start; j <= i ; ++j)
                    putchar(line[j]);
                putchar('\n');
                flag = i + 1;
                break;
            }
        if (flag == -1)
        {
            for (int i = start; i <= end; ++i)
                putchar(line[i]);
            putchar('\n');
            flag = end + 1;
        }
    }
}

int main(void)
{
    int len;
    char line[MAXCHAR];

    while ((len = rcline(line, MAXCHAR)) > 0)
        fold(line, len, LIMIT);

    return 0;
}
