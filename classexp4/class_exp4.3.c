#include <stdio.h>

int main() {
    int a = 1; // Declared in main block
    printf("a in main: %d\n", a);

    {   // First inner block
        int b = 2; // Declared in inner block
        printf("a in inner block: %d\n", a); // accessible (declared in outer block)
        printf("b in inner block: %d\n", b); // accessible
    }

    // printf("b outside inner block: %d\n", b); // will give error. not accessible.
    {   // Second inner block
        int c = 3;
        printf("a in second block: %d\n", a); // accessible
        printf("c in second block: %d\n", c); // accessible
        // printf("b in second block: %d\n", b); // will give error. not accessible.
    }

    // printf("c outside second block: %d\n", c); // will give error. not accessible.

    return 0;
}
