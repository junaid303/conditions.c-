//Write a C program to print the sum of each column elements of a matrix. 
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

  // find sum of elements in each column and print it out
  for (int j = 0; j < n; j++) {
    int sum = 0;
    for (int i = 0; i < m; i++) {
      sum += matrix[i][j];
    }
    printf("%d ", sum);
  }
  printf("\n");

  return 0;
}
/*2 5
-50 20 3 25 -20
88 17 38 72 -10 */