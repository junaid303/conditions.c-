#include <stdio.h>
#include <stdbool.h>

bool is_prime(int num) {
  if (num <= 1) {
    return false;
  }
  for (int i = 2; i <= num/2; i++) {
    if (num % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  int M, N, i, j, num;
  int matrix[10][10];
  int primes[100];
  int count = 0;

  // Read the matrix dimensions
  scanf("%d %d", &M, &N);

  // Read the matrix elements
  for (i = 0; i < M; i++) {
    for (j = 0; j < N; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }

  // Extract prime numbers from the matrix
  for (i = 0; i < M; i++) {
    for (j = 0; j < N; j++) {
      num = matrix[i][j];
      if (is_prime(num)) {
        // Check if the prime number has already been added
        bool is_duplicate = false;
        for (int k = 0; k < count; k++) {
          if (primes[k] == num) {
            is_duplicate = true;
            break;
          }
        }
        // Add the prime number to the array if it's not a duplicate
        if (!is_duplicate) {
          primes[count] = num;
          count++;
        }
      }
    }
  }

  // Print the prime numbers
  for (i = 0; i < count; i++) {
    printf("%d ", primes[i]);
  }
  printf("\n");

  return 0;
}/*4 4
1 4 7 5
3 8 5 4
7 9 4 8
2 5 1 7 */
