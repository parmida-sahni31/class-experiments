#include <stdio.h>
int main()
{
    char ch;                    // Declaration
    int n, x=1;

    // User to input a Number
    printf("Enter a number: ");
    scanf("%d",&n);

    printf("Enter a character (a/b): ");
    scanf(" %c",&ch);

    if((ch=='a') || (ch=='A'))
    {

        for(int i=1;i<=n;i++)
        {
            // Print leading spaces
            for(int sp=1;sp<=n-i;sp++)
            {
                printf(" ");
            }

            // Print numbers in the row
            for(int j=1;j<=i;j++)
            {
                printf("%d ",x);
                x++;
            }

            printf("\n");
        }
    }

    else
    {
        for (int i = 0; i<n; i++) 
        {
            x = 1;

            // Print leading spaces
            for (int space = 0; space < n-i-1; space++) 
            {
                printf("  ");
            }

            // Print numbers in the row
            for (int j=0; j <= i; j++) 
            {
                printf("%d   ",x);
                x= x * (i - j) / (j + 1);  // Calculate next value
            }

            printf("\n");
        }
    }

    return 0;
}