/* Write a C program to sort all the rows of a matrix in ascending order, even if it contains duplicate elements.
Note: Only each row elements of the matrix should be sorted in ascending order. Not all the elements of the matrix once.*/
#include <stdio.h>

int main() {
  int m, n;
  scanf("%d %d", &m, &n); // read in matrix dimensions

  int matrix[m][n];
  // read in matrix elements
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }

  // sort each row in ascending order
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n - 1; j++) {
      for (int k = j + 1; k < n; k++) {
        if (matrix[i][j] > matrix[i][k]) {
          int temp = matrix[i][j];
          matrix[i][j] = matrix[i][k];
          matrix[i][k] = temp;
        }
      }
    }
  }

  // print out the sorted matrix
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }

  return 0;
}
