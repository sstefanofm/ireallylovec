/* program that removes all comments contained in a C source code file */

#include <stdio.h>

int
strlen(char s[])
{
    int i;
    for (i = 0; s[i] != '\0'; ++i)
       ; 
    return i;
}

/* checks if they're valid C files */
int
ccheck(int filesc, char *files[])
{
    for (int i = 1; i < filesc; ++i)
        if (files[i][strlen(files[i]) - 1] != 'c' || files[i][strlen(files[i]) - 2] != '.')
            return i;
    return 0;
}

int
checkerrors(int argc, char *argv[])
{
    int errindex;

    if (argc < 2) {
        printf("ERROR: Usage: %s <file1.c> [<file2.c> ...]\n", argv[0]);
        return 1;
    }
    if (errindex = ccheck(argc, argv))
    {
        printf("ERROR: Only C source code files are allowed. '%s' is not a valid file\n", argv[errindex]);
        return 2;
    }
    return 0;
}

int
main(int argc, char *argv[])
{
    int exitcode;

    if (exitcode = checkerrors(argc, argv))
        return exitcode;

    // start process...
}
