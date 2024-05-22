#include<stdio.h>
extern int x; // takes value of x from another file where this file is linked writing include in extern-link.c file.

void display()
{
    printf("Hello from extern-support class.\n");
    printf("value of x = %d.", x); // for accessing value of x it must be declared globally in linked file.
}