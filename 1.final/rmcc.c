/* program that removes all comments contained in a C source code file */

#include <stdio.h>
#include <stdbool.h>

/* checks if they're valid C files */
bool ccheck(int filesc, char *files[])
{
    FILE *fp;

    for (int i = 1; i < filesc && (fp = fopen(files[i], "r")) != NULL; ++i)
    {
        // check if it's a C source code program
        return false;

        // close...
        fclose(fp);
    }
    return true;
}

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("ERROR: Usage: %s <file1.c> [<file2.c> ...]\n", argv[0]);
        return 1;
    }

    ccheck(argc, argv);

    // start process...

    return 0;
}
