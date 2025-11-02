/* Perform pointer arithmetic (increment and decrement) on pointers of different data 
types. Observe how the memory addresses change and the effects on data 
access. */

#include <stdio.h>

int main()
{
    int x = 20;
    float y = 10.5;
    char z = 'A';

    int *p1 = &x;
    float *p2 = &y;
    char *p3 = &z;

    printf("Original Addresses:\n");
    printf("p1 = %p, p2 = %p, p3 = %p\n", p1, p2, p3);

    p1++;  
    p2++;  
    p3++;
    printf("\nAfter Increment:\n");
    printf("p1 = %p, p2 = %p, p3 = %p\n", p1, p2, p3);

    p1--;  
    p2--;  
    p3--;
    printf("\nAfter Decrement (back to original):\n");
    printf("p1 = %p, p2 = %p, p3 = %p\n", p1, p2, p3);

    return 0;
}
