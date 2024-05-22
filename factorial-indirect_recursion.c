// A C program to find the factorial using indirect recursion.
#include<stdio.h>
int fun1(int);
int fun2(int);
void main()
{
    int num;
    printf("Enter any integer to find factorial:");
    scanf("%d", &num);
    printf("The factorial of %d is %d.", num, fun1(num));
}
int fun1(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * fun2(n - 1);
    
}
int fun2(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * fun1(n - 1);
    
}