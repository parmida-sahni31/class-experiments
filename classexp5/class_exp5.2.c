#include <stdio.h>

int main() {
    int n, i;
    
    // Step 1: Input size of array
    printf("Enter number of integers: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Step 2: Input elements
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Step 3: Initialize counters
    int positive = 0, negative = 0, odd = 0, even = 0;
    
    // Step 4: Process elements
    for (i = 0; i < n; i++) {
        if (arr[i] > 0)
            positive++;
        else if (arr[i] < 0)
            negative++;
        
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    
    // Step 5: Display results
    printf("\nCount of positive numbers: %d\n", positive);
    printf("Count of negative numbers: %d\n", negative);
    printf("Count of even numbers: %d\n", even);
    printf("Count of odd numbers: %d\n", odd);
    
    return 0;
}
