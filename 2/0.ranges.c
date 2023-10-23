#include <stdio.h>

long
pow2(int power)
{
    long n = 2;

    for (int i = 1; i < power; ++i)
        n *= 2;
    
    return n;
}

void
printr(short us, char name[], short bytes)
{
    short bits = bytes * 8;

    printf("%c%s\t(%ld, %ld)\n", us == 1 ? 'u' : '\0', name, us == 1 ? 0 : pow2(bits - 1) * (-1), us == 1 ? pow2(bits) - 1 : pow2(bits - 1) - 1);
}

int
main(void)
{
    printr(0, "char", sizeof(char));
    printr(1, "char", sizeof(char));
    printr(0, "int", sizeof(int));
    printr(1, "int", sizeof(int));
    printr(0, "short", sizeof(short));
    printr(1, "short", sizeof(short));
    printr(0, "long", sizeof(long));
    printf("ulong\t(0, %lu)\n", pow2(sizeof(long) * 8) - 1);

    return 0;
}
