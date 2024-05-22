// Matrix Multiplication way 1.
#include<stdio.h>
void main() 
{
    int m, n, p, q, i, j, k;
    int a[10][10], b[10][10], c[10][10];

    printf("Enter the order of first matrix\n");
    scanf("%d %d", &m, &n);
    printf("Enter the order of second matrix\n");
    scanf("%d %d", &p, &q);

    if (n != p) 
    {
        printf("Matrix is incompatible for multiplication\n");
    } 
    else 
    {
        printf("Enter the elements of Matrix-A: \n");
        for (i = 0; i < m; i++) 
        {
            for (j = 0; j < n; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }

        printf("Enter the elements of Matrix-B: \n");
        for (i = 0; i < p; i++) 
        {
            for (j = 0; j < q; j++) 
            {
                scanf("%d", & b[i][j]);
            }
        }

        printf("Matrix-A: \n");
        for (i = 0; i < m; i++) 
        {
            for (j = 0; j < n; j++) 
            {
                printf("%d  ", a[i][j]);
            }
            printf("\n");
        }

        printf("Matrix-B: \n");
        for (i = 0; i < p; i++) 
        {
            for (j = 0; j < q; j++) 
            {
                printf("%d  ", b[i][j]);
            }
            printf("\n");
        }

        for (i = 0; i < m; i++) 
        {
            for (j = 0; j < q; j++)    
            {
                c[i][j] = 0;
                for (k = 0; k < n; k++) 
                {
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        printf("The product of the two matrices is: \n");
        for (i = 0; i < m; i++) 
        {
            for (j = 0; j < q; j++) 
            {
                printf("%d\t", c[i][j]);
            }
            printf("\n");
        }
    }
}