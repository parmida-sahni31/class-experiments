#include <stdio.h>

void demo() {
    int normalVar = 0;          // Local variable (reinitialized every call)
    static int staticVar = 0;   // Static local variable (initialized only once)

    normalVar++;
    staticVar++;

    printf("normalVar = %d, staticVar = %d\n", normalVar, staticVar);
}

int main() {
    printf("First call:\n");
    demo();

    printf("Second call:\n");
    demo();

    printf("Third call:\n");
    demo();

    return 0;
}
