#include <stdio.h>

#define LIMIT 15 /* column position where the line has to end to insert a new line */
#define MAXCHAR 200

int rcline(char line[])
{
    int c, i;

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

int foldlines(char folded[][LIMIT], char line[], int len, int it, int flag)
{
    int start, end, fi;

    start = flag;
    end = flag + LIMIT >= len ? len - 1 : flag + LIMIT; // len + 1 would be -> '\n'
    fi = it - 1;
    if (end == len - 1) // reached line's final character
    {
        int j;
        for (j = 0; j <= end - start; ++j)
            folded[fi][j] = line[start + j];
        folded[fi][j] = '\0';

        return it;
    }
    flag = -1;
    for (int i = end - 1; i >= start; --i)
        if (line[i] == ' ' || line[i] == '\t')
        {
            for (int j = 0; j <= end - start - (end - i); ++j)
                folded[fi][j] = line[start + j];
            flag = i + 1;
            break;
        }
    if (flag == -1) // never found a space or tab
    {
        for (int j = 0; j < LIMIT; ++j)
            folded[fi][j] = line[start + j];
        flag = end;
    }

    return foldlines(folded, line, len, ++it, flag);
}

void printfolded(char folded[][LIMIT], int finalit)
{
   for (int i = 0; i < finalit; ++i)
        printf("%s\n", folded[i]);
}

int main(void)
{
    int len;
    char line[MAXCHAR];
    char folded[MAXCHAR / 2][LIMIT];
    int finalit;

    while ((len = rcline(line)) > 0)
    {
        finalit = foldlines(folded, line, len, 1, 0);
        printfolded(folded, finalit);
    }

    return 0;
}
