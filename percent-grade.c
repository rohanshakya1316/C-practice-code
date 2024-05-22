/*A Program to input the percentage of the students and display the grade(division). Use IF..ELSE IF..ELSE */
#include<stdio.h>
void main()
{
    float per ;
    printf("Enter the percentage of the student: \n");
    scanf("%f", &per);
    if ( per >=60)
        printf("The student with %f%% has first division.", per);// %% for displaying one % in the execution.
    else if ( per >= 45)
        printf("The student with %f%% has second division.", per);
    else if ( per >= 35)
        printf("The student with %f%% has third division.", per);
    else 
        printf("The student with %f%% is failed.", per);
}