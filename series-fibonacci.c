/* A program to display the fibonacci series(0, 1, 1, 2, 3, 5, 8,....) upto nth term.(Using for loop) */
#include<stdio.h>
void main()
{
    int n, i, n1=0, n2=1, n3=1;
    printf("enter how much terms of fibonnaci series you want: \n");
    scanf("%d", &n);
    for(i = 1; i<=n; i++)
        {
            printf("%d\t", n1);
            n1=n2;
            n2=n3;
            n3+=n1;
        }
}