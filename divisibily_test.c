/*A Program to check the divisibility of any number by 5 */
#include<stdio.h>
void main()
{
    int num1, n ;
    printf("Enter any number as your wish:\n");
    scanf("%d", &num1);
    if(num1 % 5 == 0)
    {
        n= num1 / 5;
        printf("The number %d is divisible by 5. Its quotient is %d, if divide by 5.", num1, n);
    }
    else
        printf("The number %d is not divisble by 5.", num1);
    
}
