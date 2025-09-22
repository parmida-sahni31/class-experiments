#include <stdio.h>

int main ()
{
    //to check if it is valid: sum of two sides should be greater than the third side
    int a, b, c;
    printf("enter a: ");
    scanf("%d", &a);
    printf("enter b: ");
    scanf("%d", &b);
    printf("enter c: ");
    scanf("%d", &c);
    
    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        printf("the triangle is valid");
        if (a==b && b==c)
            printf("equilateral triangle");
        else if (a==b || b==c || a==c)
            printf("Isosceles triangle");
            
        else
            printf("scalene triangle.");


    }
    else 
        printf("the triangle is not valid");
    
    return 0;



}