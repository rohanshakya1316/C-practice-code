/*A Program to check the input number is odd or even. */
#include<stdio.h>
void main()
{
    int num1, n, n1 ;
    printf("Enter any number as your wish:\n");
    scanf("%d", &num1);
    if(num1 % 2 == 0)
        printf("The entered number %d is even.", num1);
    
    else
        printf("The entered number %d is odd.", num1);
    
}
