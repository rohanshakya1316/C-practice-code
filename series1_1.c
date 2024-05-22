/* A program to display the series 1, 4, 9, 16, ..... 15th term.(Using while loop) */
#include<stdio.h>
void main()
{
    int num = 1 ;
    while(num<=15)
    {
        printf("%d \t", num * num);
        num++;
    }
}