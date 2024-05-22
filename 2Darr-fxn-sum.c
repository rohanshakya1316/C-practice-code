#include <stdio.h>

// Function to input matrix elements
void inputMatrix(int m, int n, int matrix[m][n]) 
{
    printf("Enter the elements of the matrix:\n");

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to display matrix elements
void displayMatrix(int m, int n, int matrix[m][n]) 
{
    printf("Matrix elements are:\n");

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to add two matrices
void addMatrices(int m, int n, int matrix1[m][n], int matrix2[m][n], int result[m][n]) 
{
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

int main() {
    int m, n;

    // Input the dimensions of the matrices
    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);

    int matrix1[m][n], matrix2[m][n], result[m][n];

    // Input elements for the first matrix
    inputMatrix(m, n, matrix1);

    // Input elements for the second matrix
    inputMatrix(m, n, matrix2);

    // Add the matrices
    addMatrices(m, n, matrix1, matrix2, result);

    // Display the matrices and their sum
    printf("\nMatrix 1:\n");
    displayMatrix(m, n, matrix1);

    printf("\nMatrix 2:\n");
    displayMatrix(m, n, matrix2);

    printf("\nSum of Matrices:\n");
    displayMatrix(m, n, result);

    return 0;
}
