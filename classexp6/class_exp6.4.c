#include <stdio.h>

// Function to check if a number is prime
int ISPRIME(int num) 
{
    if (num <= 1)
        return 0;

    for (int i = 2; i * i <= num; i++) 
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() 
{
    int start, end;

    // Input the range
    printf("Enter the starting value of the range: ");
    scanf("%d", &start);

    printf("Enter the ending value of the range: ");
    scanf("%d", &end);

    if (start > end) 
    {
        printf("Invalid range! Start must be less than or equal to end.\n");
        return 1;
    }

    printf(" \nPrime numbers between %d and %d are:\n", start, end);

    for (int i = start; i <= end; i++) 
    {
        if (ISPRIME(i))
            printf("%d ", i);
    }

    printf("\n ");
    return 0;
}