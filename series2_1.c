/* A program to display the series 5, 55, 555, 5555, 55555. (Using while loop)*/
#include<stdio.h>
void main()
{
    int i = 0, n = 5;
    while(i<5)
    { 
        printf("%d\t", n);
        n = n * 10 + 5;
        i++;
    }
}