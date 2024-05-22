// A program to display the series 1, 2, 4, 7,... upto nth term. (Using do... while loop)
#include<stdio.h>
void main()
{
    int n, i = 0, increment = 1, num = 1;
    printf("Enter how many terms you want to display:");
    scanf("%d", &n);
    do{
        printf("%d\t", num);
        num+=increment;
        increment++;
        i++;
    } while(i<n);
}