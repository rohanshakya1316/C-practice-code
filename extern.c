#include<stdio.h>
void fun1();
void fun2();
void main()
{
    extern int x;  // External storage class definition for x, it takes value from global declaration anywhere in the program. top or bottom
    printf("Inside main() x = %d\n", x);
    fun1();
    fun2();
}

void fun1()
{
    int x = 1;
    x += 10;
    printf("inside fun1() x = %d\n", x);
}

void fun2()
{
    int y = 5;
    y ++;
    printf("Inside fun2() y = %d\n", y);
}
int x = 100;  // Global declaration for x.