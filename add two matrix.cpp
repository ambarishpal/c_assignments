#include <stdio.h>

#define MAX_SIZE 10
void addMatrices(int first[MAX_SIZE][MAX_SIZE], int second[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = first[i][j] + second[i][j];
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
    int first[MAX_SIZE][MAX_SIZE], second[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];
    int rows, cols;

    printf("Enter the number of rows and columns (max %d): ", MAX_SIZE);
    scanf("%d %d", &rows, &cols);

    if (rows <= 0 || rows > MAX_SIZE || cols <= 0 || cols > MAX_SIZE) {
        printf("Please enter valid dimensions.\n");
        return 1;
    }

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &first[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &second[i][j]);
        }
    }

    addMatrices(first, second, result, rows, cols);

    printf("Sum of the two matrices:\n");
    printMatrix(result, rows, cols);

    return 0;
}
