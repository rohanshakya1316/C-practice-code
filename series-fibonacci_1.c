// A program to display the fibonacci series(0, 1, 1, 2, 3, 5,.....) upto nth term.(Using while loop)
#include<stdio.h>
void main()
{
    int n, counter = 1, first = 0, second = 1, next;
    printf("Enter how many terms you want to display: ");
    scanf("%d", &n);
    while(counter<=n)
    {
        printf("%d \t", first);
        next = first + second;
        first = second;
        second = next;
        counter++;
    }
}
