/* Declare different types of pointers (int, float, char) and initialize them with the 
addresses of variables. Print the values of both the pointers and the variables they 
point to. */

#include <stdio.h>

int main ()
{
    int a = 2;
    float b = 1.1;
    char c = '*';

    int *iptr= &a;
   float *fptr= &b;
    char *cptr= &c;

    printf("value of a = %d, address= %p, pointer points to= %p \n", a, &a, iptr);
    printf("value pointed by iptr= %d \n\n", *iptr);

    printf("value of b = %f, address= %p, pointer points to= %p \n", b, &b, fptr);
    printf("value pointed by fptr= %f \n\n", *fptr);

    printf("value of c = %c, address= %p, pointer points to= %p \n", c, &c, cptr);
    printf("value pointed by cptr= %c \n\n", *cptr);

    return 0;

}