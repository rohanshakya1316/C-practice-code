// Find the smallest and largest number among 5 input numbers using array.
#include<stdio.h>
void main()
{
    int small, great, num[5], i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter the number %d:", i+1);
        scanf("%d", &num[i]);
    }
    for (i = 0; i < 5; i++)
    {
        great = num[0];
        small = num[0];
        if (great < num[i])
        {
            great = num[i];
        }
        else if (small > num[i])
        {
            small = num[i];
        }
        
    }
    printf("Greatest number : %d\n", great);
    printf("Smallest number: %d", small);
    
}