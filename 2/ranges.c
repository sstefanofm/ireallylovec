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
printr(short us, char name[], short bits)
{
    printf("%c%s\t(%ld, %ld)\n", us == 1 ? 'u' : '\0', name, us == 1 ? 0 : pow2(bits - 1) * (-1), us == 1 ? pow2(bits) - 1 : pow2(bits - 1) - 1);
}

int
main(void)
{
    char c;
    int i;
    short s;
    long l;

    printr(0, "char", sizeof(c) * 8);
    printr(1, "char", sizeof(c) * 8);
    printr(0, "int", sizeof(i) * 8);
    printr(1, "int", sizeof(i) * 8);
    printr(0, "short", sizeof(s) * 8);
    printr(1, "short", sizeof(s) * 8);
    printr(0, "long", sizeof(l) * 8);
    printf("ulong\t(0, %lu)\n", pow2(sizeof(l) * 8) - 1);

    return 0;
}
