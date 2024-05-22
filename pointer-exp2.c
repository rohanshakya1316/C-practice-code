#include<stdio.h>
void main()
{
    int a = 10, b = 8, *p1 = &a, *p2 = &b;
    printf("a AND b: %d.\n",(*p1 & *p2));
    printf("a OR b: %d.\n",(*p1 | *p2));
    printf("a XOR b: %d.\n",(*p1 ^ *p2));
    printf("NOT a: %d.\n",(~*p1));
    printf("a RIGHT SHIFT b: %d.\n",(*p1 >> *p2));
    printf("a LEFT SHIFT b: %d.\n",(*p1 << *p2));


}