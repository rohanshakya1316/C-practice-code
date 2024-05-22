// A c program to search an element from the n size array using the concept of pointer.
// #include<stdio.h>
// void main()
// {
//     int arr[100], n, i, search;
//     printf("Enter the size of the array:");
//     scanf("%d", &n);
//     for (i = 0; i < n; i++)
//     {
//         printf("Enter element %d:", i + 1);
//         scanf("%d", (arr + i));
//     }
//     printf("Enter the element to be searched:");
//     scanf("%d", &search);
//     for (i = 0; i < n; i++)
//     {
//         if (search == *(arr + i))
//         {
//             printf("%d is found in %d position.", search, i + 1);
//             break;
//         }
//     }
//     if (i == n)
//     {
//         printf("%d is not found.", search);
//     } 
// }

#include<stdio.h>
void main()
{
    int arr[100], n, i, search;
    int *ptr = arr;
    printf("Enter the size of the array:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d:", i + 1);
        scanf("%d", (ptr + i));
    }
    printf("Enter the element to be searched:");
    scanf("%d", &search);
    for (i = 0; i < n; i++)
    {
        if (search == *(ptr + i))
        {
            printf("%d is found in %d position.", search, i + 1);
            break;
        }
    }
    if (i == n)
    {
        printf("%d is not found.", search);
    }
    
    
}