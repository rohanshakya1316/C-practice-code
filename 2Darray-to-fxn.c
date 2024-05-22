#include<stdio.h>
#define N 100
#define M 100
void read(int, int, int [M][N]);
void display(int, int, int [M][N]);
void sum(int, int, int[M][N], int[M][N], int[M][N]);

void main()
{
    int m, n;
    printf("Enter the size of the 2D arrays:");
    scanf("%d %d", &m, &n);
    int mat1[m][n], mat2[m][n], mat_sum[m][n];
    printf("Enter elements for first matrix:\n");
    read(m, n, mat1);
    printf("Enter elements for second matrix:\n");
    read(m, n, mat2);
    printf("The sum of entered matrices is as follows:\n");
    sum(m, n, mat1, mat2, mat_sum);
    printf("The first matrix is :\n");
    display(m, n, mat1);
    printf("The second matrix is:\n");
    display(m, n, mat2);
    printf("The sum of two matrices is:\n");
    display(m, n, mat_sum);
    
}


void read(int x, int y, int mat[x][y])
{
    int i, j;
    for (i = 0; i < x; i++)
    {
       for (j = 0; j < y; j++)
       {
            printf("Element of %d%d :", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
       }
    }
}

void display(int x, int y, int mat[x][y])
{
    int i, j;
    for (i = 0; i < x; i++)
    {
       for (j = 0; j < y; j++)
       {
            printf("%d \t", mat[i][j]);
       }
       printf("\n");
    }
}


void sum(int x, int y, int a[x][y], int b[x][y], int result[x][y])
{
    int i, j; 
    for ( i = 0; i < x; i++)
    {
        for ( j = 0; j < y; j++)
        {
            result[i][j] = a[i][j] + b[i][j];
        }
    }    
}



// #include <stdio.h>

// // Function to read a matrix of size n x n
// void readMatrix(int n, int matrix[][n]) {
//     printf("Enter the elements of the matrix:\n");
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             scanf("%d", &matrix[i][j]);
//         }
//     }
// }

// // Function to print a matrix of size n x n
// void printMatrix(int n, int matrix[][n]) {
//     printf("Matrix:\n");
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             printf("%d\t", matrix[i][j]);
//         }
//         printf("\n");
//     }
// }

// // Function to find the sum of two matrices of size n x n
// void addMatrices(int n, int matrix1[][n], int matrix2[][n], int result[][n]) {
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             result[i][j] = matrix1[i][j] + matrix2[i][j];
//         }
//     }
// }

// int main() {
//     int n;

//     // Get the size of the matrix
//     printf("Enter the size of the matrix (n): ");
//     scanf("%d", &n);

//     // Declare matrices
//     int matrix1[n][n], matrix2[n][n], result[n][n];

//     // Read matrices
//     printf("For Matrix 1:\n");
//     readMatrix(n, matrix1);

//     printf("For Matrix 2:\n");
//     readMatrix(n, matrix2);

//     // Add matrices
//     addMatrices(n, matrix1, matrix2, result);

//     // Print matrices and result
//     printf("\n");
//     printMatrix(n, matrix1);

//     printf("\n+\n\n");
//     printMatrix(n, matrix2);

//     printf("\n=\n\n");
//     printMatrix(n, result);

//     return 0;
// }
