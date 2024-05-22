#include<stdio.h>
void main()
{
    int i, j, rows = 5, cols = 3, space;
    for (i = 1; i <= rows; i++) 
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }   
    for (i = rows - 1; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
}