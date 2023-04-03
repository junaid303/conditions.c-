/*Write a C program to perform matrix primary and secondary diagonals sum. 
Note: Program should read a square matrix only. The first line should contain the M and N matrix dimensions.
The matrix elements should be read from the second line.*/
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

  int primary_sum = 0;
  int secondary_sum = 0;

  // loop over primary and secondary diagonals and add up their elements
  for (int i = 0; i < m; i++) {
    primary_sum += matrix[i][i]; // add element from primary diagonal
    secondary_sum += matrix[i][n - i - 1]; // add element from secondary diagonal
  }

  // if M and N are odd, subtract the middle element (which was double-counted)
  if (m % 2 == 1 && n % 2 == 1) {
    int middle = m / 2;
    primary_sum -= matrix[middle][middle];
    secondary_sum -= matrix[middle][middle];
  }

  // output the sum of the diagonals
  printf("%d\n", primary_sum + secondary_sum);

  return 0;
}

