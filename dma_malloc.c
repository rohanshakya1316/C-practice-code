// A C program to demonstrate the malloc() for dyamic memory allocation.
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n, *ptr;
    int sum = 0;
    float avg;
    printf("How many numbers are there?  ");
    scanf("%d", &n);
    ptr = (int*)malloc(n * sizeof(int)); //malloc: memory allocation
    if (ptr == NULL)
    {
        printf("Could not allocate memory.\n");
        exit(1);
    }
    for (int i = 0; i < n; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", (ptr + i));
    }
    for (int i = 0; i < n; i++)
    {
        sum += *(ptr + i);
    }
    avg = (float) sum / n;
    printf("The average of given numbers is %f.\n", avg);
    free(ptr);
}