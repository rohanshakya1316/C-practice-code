// Example of direct recursion. C program to display n fibonacci series using recursion.
#include<stdio.h>
int fibonacci(int);
void main()
{
    int terms;
    printf("Enter how many terms for displaying fibonnaci series:");
    scanf("%d", &terms);
    for (int i = 0; i < terms; i++)  // using for loop to get the fibonacci series
    {
        printf("%d  ", fibonacci(i));
    }
    
}

int fibonacci(int n)  //direct recursion
{
    if (n == 0) // n = 0 return 0 first fibonacci term
    {
        return 0;
    }
    if (n == 1) // n = 1 return 1 second fibonacci term
    {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
    
}