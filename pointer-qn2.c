#include<stdio.h>
void main()
{
    int data[5];
    int *p1, *p2;
    for (int i = 0; i < 5; i++)
    {
        data[i] = i;

    }
    p1 = &data[3];
    p2 = &data[2];
    if (p1 > p2)
    {
        printf("p1 is greater than p2.");
    }
    else
    {
        printf("p2 is greater than p1.");
    }
    
    
}