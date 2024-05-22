#include<stdio.h>
void main()
{
    int x, y, z;
    x = 3;
    //y = x++ + ++x + x++;
    //z = ++x + ++x + x++;
    //printf("y = %d\n", y);
    //printf("z = %d\n", z);
    //printf("x = %d", x);
    y = (++x)+(x++);
    printf("y = %d",y);
}