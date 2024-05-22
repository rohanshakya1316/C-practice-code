#include<stdio.h>
#include<string.h>
void main()
{
    char str[50], rev[50];
    int len, i, j;
    printf("Enter the string:");
    gets(str);
    len = strlen(str);
    // for (i = 0; i < len/2; i++)
    // {
    //     char ch = str[i];
    //     str[i] = str[len-1-i];
    //     str[len-1-i] = ch;
    // }
    // printf("the reverse order is %s.", str);
    for (i = len - 1, j = 0; i >= 0; i--)
    {
        rev[j++] = str[i];
    }
    rev[j] = '\0';
    printf("Reverse: %s", rev);
}