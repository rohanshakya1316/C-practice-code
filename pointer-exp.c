#include<stdio.h>
void main()
{
    int a = 10, b = 15, c = 20;
    int *p1, *p2, *p3;
    p1 = &a;
    p2 = &b;
    p3 = &c;
    *p1 = 50;
    *p2 += 90;
    *p3 /= 10;
    printf("value of a = %d, %d.\n", *p1, a);
    printf("value of b = %d, %d.\n", *p2, b);
    printf("value of c = %d, %d.\n", *p3, c);
}