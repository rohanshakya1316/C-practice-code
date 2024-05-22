/* A program to display the series 1, 2, 4, 7, ...nth term.(Use while loop) */
#include<stdio.h>
void main()
{
    int n, i = 1, num = 1, increment = 1;
    printf("Enter how many terms you want to display: ");
    scanf("%d", &n);
    while(i<=n)
        {
            printf("%d\t", num);
            num+=increment;
            increment++;
            i++;
        }
}