// Function with argument and without return value.
/* WAP to check palindrome number using function. */
#include<stdio.h>
void rev(int);

void main()
{
    int num;
    printf("Enter any number:");
    scanf("%d", &num);
    rev(num);
    
}

void rev(int x)
{
    int rev = 0, rem, origin_num;
    origin_num = x;
    while (x != 0)
    {
        rem = x % 10;
        rev = rev * 10 + rem;
        x /= 10;
    }
   
    if (rev == origin_num)
    {
        printf("The entered number is palindrome.");
    }
    else
    {
        printf("The entered number is not palindrome.");
    }   
      
}