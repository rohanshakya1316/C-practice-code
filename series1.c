/* A program to display the series 1, 4, 9, 16, ..... 15th term.(Using for loop) */
#include<stdio.h>
void main()
{
    int i ;
    for(i = 1; i<=15; i++)
        {
            printf("%d\t", i*i);
        }
}