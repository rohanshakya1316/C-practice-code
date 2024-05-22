// A program to display the series 6, 66, 666, 6666,...., nth term.
#include<stdio.h>
void main()
{
    long double num = 6;
    int n, i = 0;
    printf("Enter how many terms to display:");
    scanf("%d", &n);
    do{
        printf("%Lf\t", num); // %Lf is the format specifier for long double.
        num = num * 10 + 6;
        i++;
    }while(i<n);
}