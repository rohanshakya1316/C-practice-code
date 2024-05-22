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
*
*
*
*
            */ 
#include<stdio.h>
void main()
{
    int m, i, j;
    for (m = 1; m <=2; m++)
    {
        for (i = 1; i <= 5; i++)
        {
            for (j = 1; j <= i; j++)
            {
                printf("*  ");
            }
            printf("\n");
        }

    }
    for (int n = 1; n <= 4; n++)
        printf("*  \n");
        
}