// through basic rules of passing array
// #include<stdio.h>
// void display(char []);
// void main()
// {
//     char name[50];
//     printf("enter any string:");
//     gets(name);
//     display(name);
// }

// void display(char str[])
// { 
//     printf("the entered string is %s.", str); 
// }

// through pointer notation
#include<stdio.h>
void display(char *);
void main()
{
    char name[50];
    printf("enter any string:");
    gets(name);
    display(name);
}

void display(char *str)
{ 
    printf("the entered string is %s.", str); 
}