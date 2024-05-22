// A program to display the series 1, 4, 9, 16,...,nth term.(Using do...while loop)
#include<stdio.h>
void main()
{
    int counter = 1, n;
    printf("Enter how many terms you want to display: \t");
    scanf("%d", &n);
    do {
        printf("%d\t", counter * counter);
        counter++;
    } while(counter<=n);
}