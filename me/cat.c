#include <stdio.h>

void getfc(char fn[])
{
    int c;
    FILE *fp;

    if ((fp = fopen(fn, "r")) == NULL)
    {
        printf("ERROR: File \"%s\" does not exist!\n", fn);
        return;
    }

    while ((c = getc(fp)) != EOF)
        putchar(c);
    fclose(fp);
}

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("ERROR: Wrong usage.\nUsage: %s \"filename\"\n", argv[0]);
        return 1;
    }

    for (int i = 1; i < argc; ++i)
        getfc(argv[i]);

    return 0;
}
