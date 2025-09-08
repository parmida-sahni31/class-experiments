#include <stdio.h>

int main ()
{
    char name[20];
    int age;

    printf("enter your name: ");
    scanf("%s", name);
   
    printf("enter your age: ");
    scanf("%d", &age);

    printf("Hello, %s You are %d years old.", name, age);

    return 0; 
    
}
