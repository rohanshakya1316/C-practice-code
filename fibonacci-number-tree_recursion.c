#include<stdio.h>
int fibo_tree(int n)  // function definition
{
    // Base condition / case
    // Fibonacci of 0 and 2 is number itself.
    if (n <= 1)
    {
        return n;
    }
    else
    {
        // Tree recursive call
        return fibo_tree(n - 1) + fibo_tree(n - 2);
    }
    
}

void main()
{
    int num;
    printf("Enter integer to find the fibonacci number:");
    scanf("%d", &num);
    int fibo = fibo_tree(num);  // Funciton call
    printf("%d", fibo);  // prints num th fibonacci number.
}