// A C program to display first 10 natural numbers in 2 1 4 3 way.
#include<stdio.h>
int num = 1;
void odd(); // add 1 when odd() fxn
void even(); // subtract 1 when even() fxn
void main()
{
    odd(); // main call the odd() fxn at once
}

// below is know as the indirect recursion.
void odd()
{
    if (num <= 10)
    {
        printf("%d  ", num + 1); // print a number adding 1
    }
    num ++;
    even(); // call the even() fxn in odd() fxn
}
void even()
{
    if (num <= 10)
    {
        printf("%d  ", num - 1); // print a number subtracting 1
    }
    num ++;
    odd(); // call the odd() fxn in even() fxn
}