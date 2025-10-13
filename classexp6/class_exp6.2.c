#include <stdio.h>

void fib(int f, int s, int n)
{
    if(s==n)
        return ;
    else
    {
        printf("%d ",f+s);
        fib(s,f+s,n);
    }
}

int main()
{
    int num;
    printf(" \nEnter a number: ");
    scanf("%d",&num);

    printf("\nFibonacci Series: \n");
    fib(1,0,num);
    printf("\n ");

    return 0;
}