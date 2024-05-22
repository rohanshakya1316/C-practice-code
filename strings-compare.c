#include<stdio.h>
#include<string.h>
void main()
{
    int flag = 0, i, value;
    char s1[30], s2[30];
    printf("enter string1:");
    gets(s1);
    printf("enter string2:");
    gets(s2);

    // Using Built-in function strcmp() function.
    // value = strcmp(s1,s2);
    // if (value == 0)
    // {
    //     printf("the strings are same.");
    // }
    // else
    // {
    //     printf("THe strings are not same.");
    // }

    // Manual logic 
    for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
    {
        if (s1[i] != s2[i])
        {
            flag = 1;
            break;
        }
        
    }
    if (flag == 0)
    {
        printf("The strings are same.");
    }
    else
    {
        printf("The strings are not same.");
    }
}