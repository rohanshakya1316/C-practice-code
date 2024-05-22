// Enter names of 10 students and display whether the name is in the list or not.
#include<stdio.h>
#include<string.h>
#define N 100
int search(char [][N], char *, int*);
void main()
{
    char arr[10][N];
    char search_name[N];
    int flag = 0, list;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", arr[i]);
    }
    printf("Enter the name to be searched: ");
    scanf("%s", search_name);
    flag = search(arr, search_name, &list);
    if (flag == 1)
    {
        printf("The entered string %s is found in the list number %d.", search_name, list + 1);
    }
    else
    {
        printf("The entered string %s is not found in the list.", search_name);
    }
}

int search(char str[][N], char *str1, int *n)
{
    int i;
    for (i = 0; i < 10; i++)
    {
        if (strcmp(str[i], str1) == 0)
        {
            *n = i;
            return 1;
            break;
        }
    }
    if (i == 10)
    {
        return 0;
    }
}