// Write a C program to print the maximum integer element in each column of a matrix. 
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

  // find maximum element in each column and print it out
  for (int j = 0; j < n; j++) {
    int max = matrix[0][j];
    for (int i = 1; i < m; i++) {
      if (matrix[i][j] > max) {
        max = matrix[i][j];
      }
    }
    printf("%d ", max);
  }
  printf("\n");

  return 0;
}
