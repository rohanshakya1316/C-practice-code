// A C program to demonstarate the auto storage class.
#include<stdio.h>
int autoStorageClass(int);
void main()
{
    auto int a = 12;
    int b = autoStorageClass(13);
    {
        printf("First block a = %d.\n", a);
    }
    {
        auto int a = 30;
        printf("a = %d.\n", a);
    }
    {
        printf("value1: a = %d.\n", a);
        auto int a = 19;
        printf("Inside block 2 a = %d. \n", a);
    }
    printf("Inside main: a = %d.\n", a);
    printf("value of b from function: %d\n", b);
}

int autoStorageClass(int x)
{
    auto int a = x;
    printf("value of x in fun1: %d\n", a);
    return a;
}