//2. Write a C program to print the minimum integer element in each column of a matrix. 
#include <stdio.h>

int main() {
  int M, N, i, j;
  int matrix[10][10];

  // Read the matrix dimensions
  scanf("%d %d", &M, &N);

  // Read the matrix elements
  for (i = 0; i < M; i++) {
    for (j = 0; j < N; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }

  // Find the minimum element in each column
  int min_elements[10];
  for (j = 0; j < N; j++) {
    min_elements[j] = matrix[0][j];
    for (i = 1; i < M; i++) {
      if (matrix[i][j] < min_elements[j]) {
        min_elements[j] = matrix[i][j];
      }
    }
  }

  // Print the minimum elements
  printf("[");
  for (j = 0; j < N; j++) {
    printf("%d", min_elements[j]);
    if (j < N-1) {
      printf(", ");
    }
  }
  printf("]\n");

  return 0;
}
/*3 3
1 2 3 
10 20 30
5 10 15 */