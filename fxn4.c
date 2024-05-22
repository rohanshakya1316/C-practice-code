
// Function without argument with return value.
/* WAP to check wheater the given number is a Armstorng number or not using function. */
#include<stdio.h>
int arm(void);

void main()
{
    int a = arm();
    if (a == 1)
    {
        printf("The entered number is armstrong.");
    }
    else
        printf("The entered number is not armstrong.");
    
}

int arm()
{
    int num, origin_num = 0, rem = 0, n = 0;
    printf("Enter any three interger number:");
    scanf("%d", &num);
    origin_num = num;
    while (num != 0)
    {
        rem = num % 10;
        n += rem * rem *rem; 
        num /= 10;
    }
    if (origin_num == n)
    {
        return 1;
    }
    else
        return 0;

}