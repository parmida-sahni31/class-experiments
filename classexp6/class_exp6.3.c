#include <stdio.h>

int GCD(int p, int q)
{
    if(q==0)
        return p;
    else
        return GCD(q,p%q);
}

int main()
{
    int n1, n2;
    printf(" \nEnter two numbers to find GCD: ");
    scanf("%d %d",&n1,&n2);

    int i=GCD(n1,n2);
    printf("\nGCD (the greatest common divisor) of %d and %d is : %d \n ",n1,n2,i);

    return 0;
}