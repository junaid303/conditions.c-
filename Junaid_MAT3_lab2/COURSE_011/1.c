#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int matrix[10][10];
    int n;
    scanf("%d", &n);

    // read matrix elements
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // extract prime numbers from lower triangular matrix
    int primes[100];
    int k = 0;
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (isPrime(matrix[i][j])) {
                primes[k++] = matrix[i][j];
            }
        }
    }

    // sort primes in descending order
    for (int i = 0; i < k; i++) {
        for (int j = i + 1; j < k; j++) {
            if (primes[i] < primes[j]) {
                int temp = primes[i];
                primes[i] = primes[j];
                primes[j] = temp;
            }
        }
    }

    // print primes
    printf("[");
    for (int i = 0; i < k; i++) {
        if (i > 0) {
            printf(", ");
        }
        printf("%d", primes[i]);
    }
    printf("]");

    return 0;
}
/*4 4
2 3 5 9
7 8 9 5
4 2 1 6
3 5 8 7 */
