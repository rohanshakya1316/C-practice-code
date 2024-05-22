// A program to test the break statement in C Language.
/* A program to ask a number from in between 1 to 100 and
   skips the execution of the entered number but prints the rest. */
#include<stdio.h>
void main()
{
    int n;
    printf("Please enter the number betweem 1 to 100:");
    scanf("%d", &n);
    for(int i=1; i<=100; i++)
    {
        if(i == n)
            continue;
        printf("%d ", i);
    }
}