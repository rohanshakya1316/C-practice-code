/* print patten
$  $  $  $
$  $  $  $
*/ 
#include<stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 2; i++) // loop for rows.
    {
        for (j = 1; j <= 4; j++) // loop for columns.
        {
            printf("$  ");
        }
        printf("\n");
    }
        
}