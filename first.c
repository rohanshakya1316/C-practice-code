/*A Program to design the Arithmetic Calculator using IF... ELSE IF... ElSE*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int num1, num2;
    char operator;
    printf("Enter the operator for the calculation:");
    scanf("%c", &operator);
    printf("Enter the first number:");
    scanf("%d", &num1);
    printf("Enter the second number:");
    scanf("%d", &num2);
    if(operator == '+')
         {
            printf("The sum of %d and %d is %d", num1, num2, (num1+num2));
         }
    else if(operator == '-')
         {
            printf("The difference of %d and %d is %d", num1, num2, (num1-num2));
         }
    else if(operator == '*')
         {
            printf("The product of %d and %d is %d", num1, num2, (num1*num2));
         }
    else if(operator == '/')
         {
            printf("The quotient of %d and %d is %d", num1, num2, (num1/num2));
         }
    else if(operator == '%')
         {
            printf("The remainder of %d and %d is %d", num1, num2, (num1%num2));
         }
    else 
        {
            printf("Invaild operator for the calculations.");
        }
}
