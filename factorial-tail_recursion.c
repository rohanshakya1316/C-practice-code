// A C program to find the factorial of given number using tail recursion.
#include<stdio.h>
int fact_tail(int n)  // function definition
{
    if (n == 1 || n == 0)  // base case
    {
        return 1;
    }
    else
    {
        return n * fact_tail(n - 1); // tail recursion call
    }
}
void main()
{
    int num, fact;
    printf("Enter the number to find the factiorial:");
    scanf("%d", &num);
    fact = fact_tail(num);
    printf("The factorial of %d is %d.", num, fact);
}