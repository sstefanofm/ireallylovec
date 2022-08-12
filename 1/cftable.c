#include <stdio.h>

int main(void)
{
    printf("Celcius\t\tFahrenheit\n");
    for (float celcius = -60; celcius < 180; celcius += 19.7)
        printf("%6.1f\t\t%9.2f\n", celcius, celcius * 9.0 / 5.0 + 32.0);

    return 0;
}
