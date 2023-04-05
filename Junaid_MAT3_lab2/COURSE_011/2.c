#include <stdio.h>

int main() {
    int m, n;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);
    int arr[m][n];
    printf("Enter the matrix elements: \n");
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int temp[m*n], k=0;
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            if(arr[i][j] % 2 != 0) {
                temp[k++] = arr[i][j];
            }
        }
    }
    int len = k;
    for(int i=0; i<len-1; i++) {
        for(int j=i+1; j<len; j++) {
            if(temp[i] < temp[j]) {
                int swap = temp[i];
                temp[i] = temp[j];
                temp[j] = swap;
            }
        }
    }
    printf("Odd numbers in descending order: ");
    for(int i=0; i<len; i++) {
        printf("%d ", temp[i]);
    }
    printf("\n");
    return 0;
}/*4 4
2 3 5 9
7 8 9 5
4 2 1 6
4 5 8 7 */
