/* Write a function that accepts pointers as parameters. Pass variables by reference 
using pointers and modify their values within the function. */

#include <stdio.h>

void modifyValues(int *a, float *b, char *c)
{
    *a = *a + 10;   
    *b = *b * 2;    
    *c = *c + 1;    
}

int main()
{
    int x = 5;
    float y = 3.5;
    char z = 'A';

    printf("Before function call:\n");
    printf("x = %d, y = %.2f, z = %c\n", x, y, z);

    modifyValues(&x, &y, &z);

    printf("\nAfter function call:\n");
    printf("x = %d, y = %.2f, z = %c\n", x, y, z);

    return 0;
}
