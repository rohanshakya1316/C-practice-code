// #include<stdio.h>
// void main()
// {
//     int a[2][3], i, j;
//     // int *p;
//     // p = &a[0][0];
//     for ( i = 0; i < 2; i++)
//     {
//         for ( j = 0; j < 3; j++)
//         {
//             printf("Enter element %d%d:", i + 1, j + 1);
//             scanf("%d", *(a + i) + j);
//         }
        
//     }
//     printf("Display the above element in matrix form:\n");
//     for ( i = 0; i < 2; i++)
//     {
//         for ( j = 0; j < 3; j++)
//         {
//             printf("%d  ", *(*(a + i) + j));
//         }
//         printf("\n");
//     }

// }


#include<stdio.h>
void main()
{
    int a[2][3], i, j;
    int *p;
    p = &a[0];
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("Enter element %d%d:", i + 1, j + 1);
            scanf("%d", (p + i) + j);
        }
        
    }
    printf("Display the above element in matrix form:\n");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d  ", *(*(p + i) + j));
        }
        printf("\n");
    }
    
}