#include <stdio.h>

int main() {
    int m, n, p, q, i, j, k;

    // Step 1: Read dimensions of matrix A
    printf("Enter rows and columns of Matrix A (m n): ");
    scanf("%d %d", &m, &n);

    int A[m][n];

    printf("Enter elements of Matrix A (%d x %d):\n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Step 2: Read dimensions of matrix B
    printf("Enter rows and columns of Matrix B (p q): ");
    scanf("%d %d", &p, &q);

    int B[p][q];

    printf("Enter elements of Matrix B (%d x %d):\n", p, q);
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Step 3: Check compatibility
    if (n != p) {
        printf("\nMatrix multiplication not possible!\n");
        printf("Number of columns of A (%d) must equal number of rows of B (%d).\n", n, p);
        return 0;
    }

    // Step 4: Initialize result matrix
    int C[m][q];
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            C[i][j] = 0;
        }
    }

    // Step 5: Multiply matrices
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            for (k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Step 6: Print matrices
    printf("\nMatrix A:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%4d", A[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix B:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            printf("%4d", B[i][j]);
        }
        printf("\n");
    }

    printf("\nResultant Matrix (A x B):\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%4d", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
