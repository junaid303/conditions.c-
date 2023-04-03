/*1. Write a C program to extract the prime numbers from the upper triangular matrix of a matrix and display them in ascending order even it contains duplicate elements.  
Note: Program should read a square matrix only and Should not consider Primary diagonal elements in upper triangular matrix. */

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int m, n;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &m, &n);

    if (m != n) {
        printf("Error: Not a square matrix");
        return 0;
    }

    int mat[m][n];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Prime numbers in the upper triangular matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = i+1; j < n; j++) {
            if (isPrime(mat[i][j])) {
                printf("%d\n", mat[i][j]);
            }
        }
    }

    return 0;
}
/*4 4
2 3 5 9
7 8 9 5
4 2 1 6
3 5 8 7 */