// A C program to demonstrate the taile recursion.
#include<stdio.h>
void fun1(int n) // function definition
{
    if (n == 0)
    {
        return;
    }
    else{
        printf("Number is %d.\n", n);
        fun1(n - 1); // tail recursion call at the end of statement.

    }
    
}
void main()
{
    fun1(5); // passes 5 as the integer argument.
}