#include <stdio.h>

int main() {
    int n = 4;   // number of rows
    int coef, i, j;

    for (i = 0; i < n; i++) {
        coef = 1;
        for (j = 0; j <= i; j++) {
            printf("%d", coef);
            coef = coef * (i - j) / (j + 1); // formula for next coefficient
        }
        printf("\n");
    }

    return 0;
}
