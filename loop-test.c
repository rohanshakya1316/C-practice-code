
/* A program to display the first tenth odd numbers.*/
#include<stdio.h>
void main()
{
    int i, odd = 1 ;
    for(i=0; i<10; i++)
       {
            printf("%d\t", odd);
            odd+=2;
       }
}