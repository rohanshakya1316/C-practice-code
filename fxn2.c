// Function without argument and without return value.
/* WAP to reverse a number using function. */
#include<stdio.h>
void rev(void);

void main()
{
    rev();
}

void rev()
{
    int num, rev = 0, rem;
    printf("Enter any number to reverse:");
    scanf("%d", &num);
    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /=10;
    }
    
    
    printf("The reverse number is %d.", rev);
}