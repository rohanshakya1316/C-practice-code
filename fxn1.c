
// Function without declaration but definition before the main module.
/* WAP to find the sum of digits of a number using function*/
#include<stdio.h>
int sum(int x)
{
    int rem, sum = 0;
    while (x != 0)
    {
        rem = x % 10;
        sum += rem;
        x /= 10;
    }
    return sum;
}

void main()
{
    int num;
    printf("Enter a number to add the digits:\n");
    scanf("%d", &num);
    printf("The sum of digits of entered number is %d.", sum(num));

}