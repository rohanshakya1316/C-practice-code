// A C program to demonstrate the malloc() for dyamic memory allocation.
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n, *ptr;
    printf("How many numbers are there?  ");
    scanf("%d", &n);
    ptr = (int*)malloc(n * sizeof(int)); 
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
    printf("Enter the updated value of numbers: ");
    scanf("%d", &n);
    int *ptr1 = (int*)realloc(ptr, n * sizeof(int)); //realloc:  reallocation
    printf("Previous Address: %u and New Address: %u\n", ptr, ptr1);

    printf("Entered values are as follows:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", *(ptr1 + i));
    }
    free(ptr1);
}