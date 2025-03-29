#include <stdio.h>

#define MAX_SIZE 10 
void transposeMatrix(int matrix[MAX_SIZE][MAX_SIZE], int transpose[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j]; 
        }
    }
}

void printMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[MAX_SIZE][MAX_SIZE], transpose[MAX_SIZE][MAX_SIZE];
    int rows, cols;

    printf("Enter the number of rows and columns (max %d): ", MAX_SIZE);
    scanf("%d %d", &rows, &cols);

    if (rows <= 0 || rows > MAX_SIZE || cols <= 0 || cols > MAX_SIZE) {
        printf("Please enter valid dimensions.\n");
        return 1;
    }

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    transposeMatrix(matrix, transpose, rows, cols);

    printf("Original Matrix:\n");
    printMatrix(matrix, rows, cols);

    printf("Transpose of the matrix:\n");
    printMatrix(transpose, cols, rows);

    return 0;
}
