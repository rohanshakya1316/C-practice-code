/* A program to display the series 5, 55, 555, 5555, 55555.(Using for loop) */
#include<stdio.h>
void main()
{
    int i, n=5;
    for(i = 1; i<=5; i++)
        {
            printf("%d, ", n);
            n=n*10+5;
        }
}