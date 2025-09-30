#include <stdio.h>

int main() {
    int n, i, key, count = 0;
    
    // Step 1: Input size of array
    printf("Enter number of integers: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Step 2: Input elements
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Step 3: Input the number whose frequency is to be found
    printf("Enter the number to find frequency: ");
    scanf("%d", &key);
    
    // Step 4: Count frequency
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            count++;
        }
    }
    
    // Step 5: Display result
    printf("Frequency of %d = %d\n", key, count);
    
    return 0;
}
