#include<stdio.h>
#include<string.h>
void main()
{
    char s1[]={"amit"};
    char s2[6]={"amit"};
    printf("The length of the string is %d", strlen("Ramu"));
    printf("The reverse string of Ramu is %s",struper("Ramu"));
    
    if (strcmp(s1, s2) == 0) 
        printf("\nstring 1 and string 2 are equal"); 
    else if(strcmp(s1,s2)>0)
        printf("\nThe s1 is greater than s2");
    else if (strcmp(s1,s2)<0)
        printf("\nString s2 is greater than s1\n");
    
    if(strncmp("Ramayan","amit",3)==0)
    {
        printf("\nBoth strings are equal upto 3 characters");
    }
    else
    {
        printf("\nBoth are not equal upto 3 characters");
    }
    char string1[70] = "STRING";
    char string2[70] = "steing";
    int result;

    result = strncasecmp(string1, string2, 3);
    //checking the result using conditional statements.

    if (result == 0)
        printf("Strings are equal.\n");

    else if (result < 0)
        printf("\"%s\" is less than \"%s\".\n", string1, string2);

    else
        printf("\"%s\" is greater than \"%s\".\n", string1, string2);

   
    char str1[10]={"Beautiful"};
    char str2[]={"Nepal"};
    
    strcat(str1,str2);
    printf("\nThe concatinated string is %s",str1);
    printf("\nThe addition of 3 letters from str2 to str1 is %s",strncat(str1,str2,3));
    
    strcpy(str1,"Transfered Text");
    printf("\nThe copied text is %s",str1);
    printf("\nThe text that has overwritten the value of str1 is %s",strncpy(str1,"Ramayan is epic",3));
    
    printf("\nm occurs in Ramayan at %s",strchr("Ramayan",'m'));
    printf("\na occurs at %s",strrchr("Aman is a student",'a'));
    printf("\nmy occurs at %s",strstr("I love my country","my"));

    printf("\nThe reversed string is %s",strrev("ram"));
    printf("\nThe string in upper case is %s",strupr("ramu"));
    printf("\nThe lower case string is %s",strlwr("Tom"));
}