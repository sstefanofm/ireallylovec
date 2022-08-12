#include <stdio.h>

/* print Fahrenheit-Celcius table
 * 	for fahr = 0, 20, ... 300 */

int main() 
{
    int fahr, celcius;
    int bottom, top;

    bottom = 0;
    top = 300;

    fahr = bottom;

    printf("Fahrenheit to Celcius\n");
    while (fahr <= top) 
    {
        celcius = 5 * (fahr - 32) / 9;
        printf("%3d\t%5d\n", fahr, celcius);
        fahr = fahr + 20;
    }

    return 0;
}
