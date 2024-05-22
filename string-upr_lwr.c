#include<stdio.h>
#include<string.h>
void main()
{
    char str[100], str1[100];
    printf("Enter the string for strupr:");
    gets(str);
    printf("Enter the string for strlwr:");
    gets(str1);
    // printf("before using function strupr, the string is %s.\n", str);
    // printf("before using function strlwr, the string is %s.\n", str1);
    // printf("after using function strupr, the string is %s.\n", strupr(str));
    // printf("after using function strlwr, the string is %s.\n", strlwr(str1));

    // for uppercase
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
        
        
    }
    printf("the ucase after is %s.\n", str);

    // for lowercase
    for (int i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] >= 'A' && str1[i] <= 'Z')
        {
            str1[i] += 32;
        }
        
        
    }
    printf("the lcase after is %s.\n", str1);
}