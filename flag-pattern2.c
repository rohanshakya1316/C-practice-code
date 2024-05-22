/* print patten
*
*  *  
*  *  *  
*  *  *  *
*  *  *  *  *
*
*  *  
*  *  *  
*  *  *  *
*  *  *  *  *
*  *  *  *  *  *
*
*
*
*
            */ 
#include<stdio.h>
void main()
{
    int m, i, j, k, l;
    for (i = 1; i <= 5; i++)
        {
            for (j = 1; j <= i; j++)
            {
                printf("*  ");
            }
        printf("\n");
        }
    for (k = 1; k <= 6; k++)
        {
            for (l = 1; l <= k; l++)
            {
                printf("*  ");
            }
        printf("\n");
        }

    for (int n = 1; n <= 4; n++)
        printf("*  \n");
        
}