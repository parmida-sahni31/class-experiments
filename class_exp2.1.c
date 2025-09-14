#include <stdio.h>

int main ()
{
    int length ,width, area, perimeter;
    printf("enter the width: ");
    scanf("%d", &width);
    printf("enter the length: ");
    scanf("%d", &length);
    area= length*width;
    perimeter= 2 * (length + width);
    printf("the area and perimeter are: %d, %d", area, perimeter);
    return 0;

}