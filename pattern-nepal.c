#include<stdio.h>
void main()
{
    char str[]= "NEPAL";
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 0; j < i ; j++)
        {
            printf("%c ", str[j]);
        }
        
      
        printf("\n");
    }
    
}