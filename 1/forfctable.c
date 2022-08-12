#include <stdio.h>

int main() 
{
    float fahr;

    printf("%s\n", "Fahrenheit to Celcius table");
    for (fahr = 0; fahr <= 300; fahr = fahr + 20) 
        printf("%3.0f\t%5.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));

    return 0;
}
