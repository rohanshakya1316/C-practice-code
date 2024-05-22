/* A program to display the series 1, 2, 4, 7, ...nth term.(Use for loop) */
#include<stdio.h>
void main()
{
    int n, num = 1, increment=1;
    printf("Enter how many terms: ");
    scanf("%d", &n);
    for(int i = 1; i<=n; i++)
        {
            printf("%d\t", num);
            num+=increment;
            increment++;

        }
}