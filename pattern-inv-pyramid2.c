#include<stdio.h>
void main()
{
    int i, j, rows, cols, space;
    printf("Enter rows and columns: ");
    scanf("%d%d", &rows, &cols);
    for ( i = 1; i <= rows; i++)
    {
        for (space = rows; space > rows - i; space--)
        {
            printf("   ");
        }
        for ( j = cols; j >= 2 * i - 1; j--)
        {
            printf("*  ");
        }
        printf("\n");
    }
 
}