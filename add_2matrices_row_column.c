#include <stdio.h>

void addMatrices(int mat1[][10], int mat2[][10], int result[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}
void displayMatrix(int mat[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int rows, cols;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int mat1[10][10], mat2[10][10], result[10][10];
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("mat1[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("mat2[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &mat2[i][j]);
        }
    }
    addMatrices(mat1, mat2, result, rows, cols);
    printf("Resultant Matrix after addition:\n");
    displayMatrix(result, rows, cols);
    return 0;
}

