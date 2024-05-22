// Function with argument and with return value. (Mostly preferred way)
/* WAP to check wheather the given number is perfect number or not.*/
#include<stdio.h>
int perfect(int);

void main()
{
    int num;
    printf("Enter any number:");
    scanf("%d", &num);
    if(perfect(num) == 1)
    {
        printf("The entered number %d is a perfect number.", num);
    }
    else
        printf("The entered number %d isnot a perfect number.", num);
}

int perfect(int x)
{
    int sum = 0;
    for (int i = 1; i <= x/2; i++)
    {
        if (x % i == 0)
        {
            sum += i;
        }
        
    }
    if (x == sum)
    {
        return 1;
    }
    else
    return 0;
}