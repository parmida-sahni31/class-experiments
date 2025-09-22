#include <stdio.h>

int main() {
    int num;
    int positives = 0, negatives = 0, zeroes = 0;
    char choice;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num > 0)
            positives++;
        else if (num < 0)
            negatives++;
        else
            zeroes++;

        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice);  

    } while (choice == 'y' || choice == 'Y');

    printf("\nSummary:\n");
    printf("Positive numbers: %d\n", positives);
    printf("Negative numbers: %d\n", negatives);
    printf("Zeroes: %d\n", zeroes);

    return 0;
}
