#include <stdio.h>

int main() {
  int M, N, i, j, sum=0;
  int matrix[10][10];

  // Read the matrix dimensions
  scanf("%d %d", &M, &N);

  // Read the matrix elements
  for (i = 0; i < M; i++) {
    for (j = 0; j < N; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }

  // Add the non-diagonal elements
  for (i = 0; i < M; i++) {
    for (j = 0; j < N; j++) {
      if (i != j && i+j != M-1) {
        sum += matrix[i][j];
      }
    }
  }

  // Print the sum of the non-diagonal elements
  printf("Sum is %d\n", sum);

  return 0;
}/*3 3
5 6 3
6 7 2
1 8 9  */
