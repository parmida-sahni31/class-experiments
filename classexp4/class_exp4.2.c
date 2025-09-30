#include <stdio.h>

// Global variable declaration
int globalVar = 1;

// Function that declares a local variable
void func() {
    int localVar = 2;  // local variable inside myFunction
    printf("Inside func():\n");
    printf("localVar = %d\n", localVar);       // Accessible here
    printf("globalVar = %d\n", globalVar);    // Accessible here
}

int main() {
    func();

    printf("Inside main:\n");
    printf("globalVar = %d\n", globalVar);    // Accessible here

    // printf("Local variable localVar = %d\n", localVar);    // this will give error.

    return 0;
}