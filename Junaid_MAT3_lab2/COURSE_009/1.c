#include <stdio.h>

int main() {
  int M, N, i, j, old_val, new_val;
  int matrix[10][10];

  // Read the matrix dimensions
  scanf("%d %d", &M, &N);

  // Read the matrix elements
  for (i = 0; i < M; i++) {
    for (j = 0; j < N; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }

  // Read the old and new values to replace
  scanf("%d %d", &old_val, &new_val);

  // Replace all instances of old_val with new_val
  for (i = 0; i < M; i++) {
    for (j = 0; j < N; j++) {
      if (matrix[i][j] == old_val) {
        matrix[i][j] = new_val;
      }
    }
  }

  // Print the modified matrix
  for (i = 0; i < M; i++) {
    for (j = 0; j < N; j++) {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }

  return 0;
}
/*3 3
1 2 3 
10 20 30
5 10 15
10 8 */