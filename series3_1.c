/* A program to display the series 100, 81, 64, .... 1. */
#include<stdio.h>
void main()
{
    int i = 10;
    while(i>=1)
        {
            printf("%d\t", i*i);
            i--;
        }
}