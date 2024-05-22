#include<stdio.h>
void main()
{
    volatile int num =10;
    num+=100;
    printf("%d", num);

}