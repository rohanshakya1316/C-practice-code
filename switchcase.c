/*A Program to design Arithmetic Calculator using SWITCH CASE*/
#include<stdio.h>
void main()
{
    char operator;
    int num1, num2;
    printf("Please enter the operator for the calcultaions: ");
    scanf("%c",&operator);
    printf("\nEnter any two intergers number for the above operator:");
    scanf("%d%d",&num1,&num2);
    switch (operator)
    {
        case '+':
        printf("The sum of %d and %d is %d.", num1, num2, num1+num2);
        break;
        case '-':
        printf("The difference of %d and %d is %d.", num1, num2, num1-num2);
        break;
        case '*':
        printf("The product of %d and %d is %d.", num1, num2, num1*num2);
        break;
        case '/':
        printf("The quotient of %d and %d is %d.", num1, num2, num1/num2);
        break;
        case '%':
        printf("The modular division of %d and %d is %d.", num1, num2, num1%num2);
        break;
        default:
        printf("Please check the entered operator(+, -, *, /, %)");
    }
}
