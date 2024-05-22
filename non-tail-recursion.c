// A C program to demonstrate the non-tail / head recursion.
#include<stdio.h>
void head_fun(int num)  // function definition
{
    if (num > 0)
    {
        head_fun(num - 1);  // first statement to be called i.e. head recursion
        printf("%d  ", num);
    }
}

void main()
{
    int a = 5;
    printf("Use of Non- tail / Head recursive fucntion:\n");
    head_fun(a);
}