//1. Write a C program to print the minimum integer element in each row of a matrix. 
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

  // find minimum element in each row and print it out
  for (int i = 0; i < m; i++) {
    int min = matrix[i][0];
    for (int j = 1; j < n; j++) {
      if (matrix[i][j] < min) {
        min = matrix[i][j];
      }
    }
    printf("%d ", min);
  }
  printf("\n");

  return 0;
}
