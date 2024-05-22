/*A Program to check wheather a person is eligible for voting or not. Required age for voting is 18 years old. */
#include<stdio.h>
void main()
{
    int age ;
    printf("Enter the age of the person:\n");
    scanf("%d", &age);
    if(age >= 18)
        printf("The person with age %d years old is eligible for voting.", age);
    else
        printf("The person with age %d years old is not eligible for voting.", age);
}
