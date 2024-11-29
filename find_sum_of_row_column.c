#include <stdio.h>
void rowSum(int mat[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < cols; j++) {
            sum += mat[i][j];  
        }
        printf("Sum of row %d: %d\n", i + 1, sum);
    }
}
void columnSum(int mat[][10], int rows, int cols) {
    for (int j = 0; j < cols; j++) {
        int sum = 0;
        for (int i = 0; i < rows; i++) {
            sum += mat[i][j]; 
        }
        printf("Sum of column %d: %d\n", j + 1, sum);
    }
}
int main() {
    int rows, cols;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int mat[10][10];
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("mat[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }
    rowSum(mat, rows, cols);
    columnSum(mat, rows, cols);

    return 0;
}

