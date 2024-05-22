#include<stdio.h>
void main()
{
    int num = -10;
    if (num) // if num = 0, it takes false statement and when [-inf<=num<=inf - {0}], it takes true statement.
    {
        printf("I am rohan shakya.\n"); // True statement
    }
    else
    {
        printf("I am reigns.\n");  // False statement
    }
    if (!num) // if num = 0, it takes true statement and when [-inf<=num<=inf - {0}], it takes false statement.
    {
        printf("I am rohit shakya.\n");  // True Statement
    }
    else
    {
        printf("I am gubhaju.\n");  // False ststement.
    }
}