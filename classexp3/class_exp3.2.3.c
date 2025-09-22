#include <stdio.h>

int main() {
    int i, j, num = 1;

    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", num);
            num++;  // increase continuously
        }
        printf("\n"); // new line after each row
    }

    return 0;
}
