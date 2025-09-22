#include <stdio.h>
#include <math.h>

int main() {
    int limit = 20000;
    int a, b, c, d;
    
    printf("Ramanujan Numbers up to %d:\n", limit);
    
    for (a = 1; a <= cbrt(limit); a++) {
        for (b = a; b <= cbrt(limit); b++) {
            int sum1 = a*a*a + b*b*b;
            if (sum1 > limit) break;
            
            for (c = a+1; c <= cbrt(limit); c++) {
                for (d = c; d <= cbrt(limit); d++) {
                    int sum2 = c*c*c + d*d*d;
                    
                    if (sum1 == sum2 && sum1 <= limit) {
                        printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n",
                               sum1, a, b, c, d);
                    }
                }
            }
        }
    }
    
    return 0;
}
