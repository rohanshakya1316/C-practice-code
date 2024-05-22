#include<stdio.h>
#include"extern-support.c" // need to include file where we defined the extern function.

extern void display(); // extern can be used with function too.
int x = 10;
void main()
{
    display();
}