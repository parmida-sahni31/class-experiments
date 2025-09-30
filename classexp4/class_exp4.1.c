#include <stdio.h>

// Global variable declaration
int globalVar = 1;

// Function prototypes
void func1();
void func2();

int main() {
    printf("In main, globalVar = %d\n", globalVar);
    
    func1(); // Call first function
    func2(); // Call second function

    return 0;
}

void func1() {
    printf("In func1, globalVar = %d\n", globalVar);
    globalVar += 2; // Modify global variable in func1
    printf("In func1, after modification, globalVar = %d\n", globalVar);
}

void func2() {
    printf("In func2, globalVar = %d\n", globalVar);
    globalVar *= 2; // Modify global variable in func2
    printf("In func2, after modification, globalVar = %d\n", globalVar);
}
