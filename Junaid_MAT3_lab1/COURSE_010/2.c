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

  // extract non-diagonal elements and output them
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      if (i != j && i != m - j - 1) { // check if (i,j) is a non-diagonal element
        printf("%d ", matrix[i][j]); // print out the element
      }
    }
    printf("\n"); // print a newline after each row of non-diagonal elements
  }

  return 0;
}

