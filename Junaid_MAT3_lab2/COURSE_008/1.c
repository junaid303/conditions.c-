//1. Write a C program to print the sum of each row elements of a matrix. 
#include <stdio.h>

int main() {
  int M, N, i, j;
  int matrix[10][10];
  int row_sum[10] = {0};

  // Read the matrix dimensions
  scanf("%d %d", &M, &N);

  // Read the matrix elements
  for (i = 0; i < M; i++) {
    for (j = 0; j < N; j++) {
      scanf("%d", &matrix[i][j]);
      row_sum[i] += matrix[i][j];
    }
  }

  // Print the row sums
  printf("[");
  for (i = 0; i < M; i++) {
    printf("%d", row_sum[i]);
    if (i < M-1) {
      printf(", ");
    }
  }
  printf("]\n");

  return 0;
}/*2 5
-50 20 3 25 -20
88 17 38 72 -10 */
