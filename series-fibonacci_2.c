/* A program to display the fibonacci series(0, 1, 1, 2, 3, 5, 8,....) upto nth term.(Using do...while loop) */
#include<stdio.h>
void main()
{
    int n, i = 1, first = 0, second = 1, next;
    printf("enter how much terms of fibonnaci series you want: \n");
    scanf("%d", &n);
    do 
    {
        printf("%d", first);
        printf("\t");
        next = first + second;
        first = second;
        second = next;
        i++;
    }while(i <= n);
}