#include <stdio.h>

int main() {
  int M, N, i, j, k, temp;
  int matrix[10][10];

  // Read the matrix dimensions
  scanf("%d %d", &M, &N);

  // Read the matrix elements
  for (i = 0; i < M; i++) {
    for (j = 0; j < N; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }

  // Sort each column of the matrix in descending order
  for (j = 0; j < N; j++) {
    for (i = 0; i < M-1; i++) {
      for (k = i+1; k < M; k++) {
        if (matrix[k][j] > matrix[i][j]) {
          // Swap the elements if the current element is greater than the previous element
          temp = matrix[i][j];
          matrix[i][j] = matrix[k][j];
          matrix[k][j] = temp;
        }
      }
    }
  }

  // Print the sorted matrix
  for (i = 0; i < M; i++) {
    for (j = 0; j < N; j++) {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }

  return 0;
}/*3 3
5 3 9
6 3 2
1 8 9  */
