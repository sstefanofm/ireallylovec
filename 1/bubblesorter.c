#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int numbers[] = { 3, 6, 1, 5, 56, 1, 3, 8, 10, 9 };
    int aux;
    bool sorted = false;

    printf("List without order\n");
    for (int i = 0; i < 10; i++)
        printf("%6d", numbers[i]);
    printf("\n");

    while (!sorted)  
    {
        sorted = true;
        for (int i = 0; i < 9; i++)
            if (numbers[i] > numbers[i + 1])
            {
                sorted = false;
                aux = numbers[i];
                numbers[i] = numbers[i + 1];
                numbers[i + 1] = aux;
            }
    }
    
    printf("Ordered list\n");
    for (int i = 0; i < 10; i++)
        printf("%6d", numbers[i]);
    printf("\n");

    return 0;
}
