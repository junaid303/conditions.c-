/*Write a C program to extract all even numbers from a matrix and display them in ascending order even if it contains duplicate elements. */
#include <stdio.h>

int main() {
    int m, n;
    printf("Enter the dimensions of the matrix: ");
    scanf("%d %d", &m, &n);

    int matrix[m][n];

    // Reading matrix elements from user
    printf("Enter the elements of the matrix: \n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Extracting even numbers and storing them in an array
    int evenNumbers[m*n], k = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] % 2 == 0) {
                evenNumbers[k++] = matrix[i][j];
            }
        }
    }

    // Sorting the array of even numbers in ascending order
    for (int i = 0; i < k - 1; i++) {
        for (int j = i + 1; j < k; j++) {
            if (evenNumbers[i] > evenNumbers[j]) {
                int temp = evenNumbers[i];
                evenNumbers[i] = evenNumbers[j];
                evenNumbers[j] = temp;
            }
        }
    }

    // Displaying the sorted array of even numbers
    printf("Even numbers in the matrix: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", evenNumbers[i]);
    }

    return 0;
}
/*4 4
2 3 5 9
7 8 9 5
4 2 1 6
4 5 8 7 */