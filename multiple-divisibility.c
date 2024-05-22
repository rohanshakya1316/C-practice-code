/*A Program to check the divisibility of any number by 5 and 7. */
#include<stdio.h>
void main()
{
    int num1, n, n1 ;
    printf("Enter any number as your wish:\n");
    scanf("%d", &num1);
    if(num1 % 5 == 0 && num1 % 7 == 0)
    {
        n = num1 / 5;
        n1 = num1 /7;
        printf("The number %d is divisible by both 5 and 7.\n Its quotient is %d, if divide by 5 and %d, if divide by 7.", num1, n, n1);
    }
    else
        printf("The number %d is not divisble by 5 and 7.", num1);
    
}
